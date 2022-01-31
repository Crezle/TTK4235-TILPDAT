OBJ := taco_krydder.o taco_saus.o taco_lefse.o protein.o grønnsaker.o drikke.o main.o

CC := gcc

CFLAGS := -O0 -g3

.DEFAULT_GOAL := taco

.PHONY: clean
clean :
    rm -f *.o

taco : $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $@