LIST : main.o list.o
	gcc -o $@ $^
%.o : %.c list.h
	gcc -c $<
