##
## EPITECH PROJECT, 2022
## MiniLibC
## File description:
## Makefile
##

SRC	=	src/strlen.asm	\
		src/strchr.asm	\
		src/strrchr.asm	\
		src/memset.asm	\
		src/memcpy.asm	\
		src/strcmp.asm	\
		src/memmove.asm	\
		src/strncmp.asm	\
		src/strcasecmp.asm	\
		src/strstr.asm	\
		src/strpbrk.asm	\
		src/strcspn.asm	\
		src/ffs.asm	\
		src/memfrob.asm	\
		src/strfry.asm

TESTSRC	=	src/linker.c	\
			tests/strlen_test.c	\
			tests/strchr_test.c	\
			tests/strrchr_test.c	\
			tests/memset_test.c	\
			tests/memcpy_test.c	\
			tests/strcmp_test.c	\
			tests/memmove_test.c	\
			tests/strncmp_test.c	\
			tests/strcasecmp_test.c	\
			tests/strstr_test.c	\
			tests/strpbrk_test.c	\
			tests/strcspn_test.c	\
			tests/ffs_test.c	\
			tests/index_test.c	\
			tests/strfry_test.c

NAME	=	libasm.so

TESTNAME	=	unit_tests

OBJS	=	$(SRC:.asm=.o)

TESTOBJS	=	$(TESTSRC:.c=.o)

ASMFLAGS	=	-f elf64

LDFLAGS	=	-shared	\
			-fPIC

CFLAGS	=	-lcriterion	\
			--coverage	\
			-I./include

%.o : %.asm
	nasm $(ASMFLAGS) $<

all:	$(NAME)

$(NAME):	$(OBJS)
	ld $(LDFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	rm -f $(TESTOBJS)

fclean:	clean
	rm -f $(NAME)
	rm -f $(TESTNAME)
	find -name "*.gcda" -delete -o -name "*.gcno" -delete

re:	fclean $(NAME)

tests_run:	all $(TESTOBJS)
	gcc -o $(TESTNAME) $(CFLAGS) $(TESTOBJS) -ldl
	./$(TESTNAME)

.PHONY:	all clean fclean re tests_run
