;;; devices.asm
;;;
;;; Routines for interfacing with harware.

        .section "text"

;;; IN:
;;;     3 - First word of the device ID.
;;;     2 - Second word of the device ID.
;;;     1 - Device revision.
;;; 
;;; OUT:
;;;     X - The hardware index. This is 0 if the device cannot
;;;         be found.
find_device:
        SET     PUSH, A
        SET     PUSH, B
        SET     PUSH, C
        SET     PUSH, I
        SET     PUSH, J
        
        HWN     I
        SET     J, 1
        
_loop:
        HWQ     J
        
        ;; Check the current device against the desired device.
        IFN     A, PICK 8
        SET     PC, _no_match
        
        IFN     B, PICK 7
        SET     PC, _no_match
        
        IFN     C, PICK 6
        SET     PC, _no_match

        SET     PC, _success
        
_no_match:      
        ADD     J, 1

        IFE     J, I            ; Device not found.
        SET     PC, _failure

        SET     PC, _loop
        
_success:
        SET     X, J
        SET     PC, _done
_failure:
        SET     X, 0
_done:
        SET     J, POP
        SET     I, POP
        SET     C, POP
        SET     B, POP
        SET     A, POP
        
        SET     PC, POP
        
;;; IN:
;;;
;;; OUT:
;;;     X - The hardware index of the lem1802, or 0 if is not
;;;     connected.
find_lem1802:
        SET     PUSH, 0xf615
        SET     PUSH, 0x7349
        SET     PUSH, 0x1802
        JSR     find_device
        SET     0, POP
        SET     0, POP
        SET     0, POP

        SET     PC, POP

;;; IN:
;;;
;;; OUT:
;;;     X - The hardware index of the keyboard, or 0 if is not
;;;     connected.
find_keyboard:
        SET     PUSH, 0x7406
        SET     PUSH, 0x30cf
        SET     PUSH, 1
        JSR     find_device
        SET     0, POP
        SET     0, POP
        SET     0, POP

        SET     PC, POP
