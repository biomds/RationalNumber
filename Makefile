OBJS = main.o RationalNumber.o
CC = gcc

main:$(OBJS)
	$(CC) $^ -o RationalNumber

%.o:%.c
	$(CC) $^ -o $@

clean:
	$(RM) *.o  -r
