PROGNAME=main
CC=cc
FLAGS= -Wall -Werror -ggdb
run:
	${CC} ${FLAGS} ${PROGNAME}.c -o ${PROGNAME}
	./${PROGNAME}
