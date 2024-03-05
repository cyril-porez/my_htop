all:
	gcc main.c -o my_htop -Wall -Wextra -Werror -I/mingw64/include -L/mingw64/lib -lncurses
