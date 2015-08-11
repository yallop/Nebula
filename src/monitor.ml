open Prelude

type t = {
  window : Visual.Window.t;
}

let make window =
  { window }

let on_tick t =
  Lwt.return (t, None)

let on_interrupt message t =
  Program.Return t

let render t =
  let window = t.window in
  Lwt_monad.sequence_unit Visual.[
    set_color window Color.white;
    clear window;
    set_color window Color.blue;
    rectangle window ~origin:(0, 0) ~width:50 ~height:50;
    render window
    ]

let on_interaction t =
  let open Lwt in
  render t >>= fun () -> Lwt.return t

let info =
  Device.Info.{
    id = (word 0x7349f615, word 0xf615);
    manufacturer = (word 0x1c6c, word 0x8b36);
    version = word 0x1802
  }