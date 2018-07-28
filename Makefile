OBJECTS = main.o entities.o canvas.o controller.o
HEADERS =


default : battleship

main.o : main.c
entities.o : entities.c
canvas.o : canvas.c
controller.o : controller.c controller.h

battleship : $(OBJECTS)
	gcc -Wall $(OBJECTS) -o battleship
clean :
	rm -f *.o
	rm -f battleship
