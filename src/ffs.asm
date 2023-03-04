; MiniLibC by Maxime PREMONT for Epitech (2022)
BITS    64
SECTION .text
GLOBAL  ffs

; SIL or EDI ?

ffs:
    XOR EAX, EAX
    MOV ECX, 1

FIND_BIT:
    CMP ECX, 33
    JE RETO
    MOV R8D, EDI
    AND R8D, 1
    CMP R8D, 1
    JE REVALUE
    JMP GONEXT

RETO:
    RET

REVALUE:
    MOV EAX, ECX
    RET

GONEXT:
    INC ECX
    SHR EDI, 1
    JMP FIND_BIT
