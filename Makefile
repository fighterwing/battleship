OBJECTS = main.o entities.o canvas.o combat.o \
          controller.o

default : battleship

main.o : main.c
entities.o : entities.c entities.h
canvas.o : canvas.c
combat.o : combat.c combat.h
controller.o : controller.c controller.h

battleship : $(OBJECTS)
	gcc -Wall $(OBJECTS) -o battleship
clean :
	rm -f *.o
	rm -f battleship
