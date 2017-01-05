CC=g++

CFLAGS=-c -Wall

SOURCES=main.cpp worker.cpp hour.cpp

OBJECTS=$(SOURCES:.cpp=.o)

EXECUTABLE=scheduler.exe



all: $(SOURCES) $(EXECUTABLE)



$(EXECUTABLE): $(OBJECTS)

	$(CC) $(OBJECTS) -o $@



.cpp.o:

	$(CC) $(CFLAGS) $< -o $@



clean:

	rm *.o *~ scheduler.exe