LIST : list.o main.o
	gcc -o $@ $^
%.o : %.c
	gcc -c $<
