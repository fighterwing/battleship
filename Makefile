OBJECTS = main.o
HEADERS =


default: battleship

main.o: main.c

battleship: $(OBJECTS)
	gcc -Wall $(OBJECTS) -o battleship
clean:
	rm -f *.o
	rm -f battleship
