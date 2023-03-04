; MiniLibC by Maxime PREMONT for Epitech (2022)
BITS    64
SECTION .text
GLOBAL  memfrob

; RDI, RSI

memfrob:
    MOV RAX, RDI    ; Set return to area
    XOR RCX, RCX   ; Set counter to 0 for n uses

SET:
    CMP RCX, RDX
    JB DEFINE_MEM    ; If i < n set and continue
    RET

DEFINE_MEM:
    XOR byte[RDI + RCX], 42
    INC RCX
    JMP SET
