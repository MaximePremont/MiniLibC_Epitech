; MiniLibC by Maxime PREMONT for Epitech (2022)
BITS    64
SECTION .text
GLOBAL  strfry

; RDI

strfry:
    MOV RAX, RDI
    XOR RCX, RCX

DECADE:
    CMP byte[RDI + RCX], 0
    JE END
    CMP byte[RDI + RCX + 1], 0
    JE END
    MOV R8B, byte[RDI + RCX + 1]
    MOV R9B, byte[RDI + RCX]
    MOV byte[RDI + RCX + 1], R9B
    MOV byte[RDI + RCX], R9B
    INC RCX
    INC RCX
    JMP DECADE

END:
    MOV RCX, 0

DECADE_END:
    CMP byte[RDI + RCX], 0
    JE LEAVE
    CMP byte[RDI + RCX + 1], 0
    JE LEAVE
    MOV R8B, byte[RDI + RCX + 1]
    MOV R9B, byte[RDI + RCX]
    MOV byte[RDI + RCX + 1], R9B
    MOV byte[RDI + RCX], R9B

LEAVE:
    RET