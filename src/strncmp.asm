; MiniLibC by Maxime PREMONT for Epitech (2022)
BITS    64
SECTION .text
GLOBAL  strncmp

; RDI, RSI, RDX(i)

strncmp:
    CMP RDX, 0
    JBE RET_NOTHING
    XOR RCX, RCX
    SUB RDX, 1
    JMP TRY_COMP

RET_NOTHING:
    XOR EAX, EAX
    RET

TRY_COMP:
    MOV R8B, byte[RDI]
    CMP RCX, RDX
    JAE COMPARE_RET
    CMP byte[RDI], 0
    JE COMPARE_RET
    CMP byte[RSI], 0
    JE COMPARE_RET
    CMP R8B, byte[RSI]
    JNE COMPARE_RET
    INC RDI
    INC RSI
    INC RCX
    JMP TRY_COMP

COMPARE_RET:
    SUB R8B, byte[RSI]
    MOVSX EAX, R8B
    RET
