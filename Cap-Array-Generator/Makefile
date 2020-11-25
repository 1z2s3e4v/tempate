CC=g++
LDFLAGS=-std=c++11 -lm -O3
SOURCES=src/paramHdl.cpp src/parser.cpp src/dm.cpp src/main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=gen_capArray
INCLUDES=src/parser.h src/dm.h src/paramHdl.h

all: $(SOURCES) bin/$(EXECUTABLE)

bin/$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o:  %.cpp ${INCLUDES}
	$(CC) $(LDFLAGS) $< -c -o $@

c1:
	bin/gen_capArray -simpleInput input/simple4bit.txt
c2:
	bin/gen_capArray -sp input/ARRAY_CMP.sp
c3:
	bin/gen_capArray -spf input/ARRAY_CMP_FI_T1.spf

c:
	rm -rf *.o src/router/*.o bin/$(EXECUTABLE) *.out bin/*.out dump
clena:
	rm -rf *.o src/router/*.o bin/$(EXECUTABLE) *.out bin/*.out dump
clean:
	rm -rf *.o src/router/*.o bin/$(EXECUTABLE) *.out bin/*.out dump
