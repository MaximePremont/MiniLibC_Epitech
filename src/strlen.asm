; MiniLibC by Maxime PREMONT for Epitech (2022)
BITS    64
SECTION .text
GLOBAL  strlen

strlen:
    XOR RAX, RAX

COUNT:
    CMP byte[RDI + RAX], 0
    JNE INCREMENT
    RET

INCREMENT:
    INC RAX
    JMP COUNT
