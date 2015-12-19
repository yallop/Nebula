(** Manage the running DCPU-16 computer.

    @author Jesse Haber-Kucharsky
    @see 'LICENSE' License details *)

open Common

open Functional

(** A {! word} could not be decoded by the DCPU-16. *)
exception Bad_decoding of word * Computer_state.t

(** A device was requested at an index that has not been assigned. *)
exception No_such_device of word * Computer_state.t

(** Jump to the interrupt handler and disable interrupt dequeing. *)
val jump_to_handler : Interrupt.t -> Computer_state.t -> Computer_state.t

(** Execute an interrupt trigger.

    Software triggers are enqueued directly as interrupts with a given message.
    Hardware triggers cause the interrupt hook for the device registered at
    the interrupt index to be invoked. *)
val execute_trigger : Interrupt.Trigger.t -> Computer_state.t -> Computer_state.t IO.t

(** Execute an iteration of the DCPU-16.

    First, dequeue an interrupt (if one is waiting) and transfer control to the interrupt handler.

    Next, decode the next instruction from memory at the program counter.

    Finally, check for an interrupt trigger generated by the instruction and
    execute it. *)
val step : Computer_state.t -> Computer_state.t IO.t

(** "Tick" all devices in the manifest. *)
val tick_devices : Computer_state.t -> Computer_state.t IO.t

(**  Launch a DCPU-16.

     Control is suspended every [suspend_every] nanoseconds to [suspension]. Otherwise, this
     computation will never terminate unless it throws. *)
val launch :
  suspend_every : Duration.t ->
  suspension : (Computer_state.t -> Computer_state.t IO.t) ->
  Computer_state.t ->
  'a IO.t