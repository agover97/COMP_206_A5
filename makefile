LIST : main.o list.o
	gcc -o $@ $^
%.o : %.c
	gcc -c $<
