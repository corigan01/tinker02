CXX = g++
CXXFLAGS = -Wall -std=c++20 -g -I include
LDFLAGS = 
LBLIBS = -lraylib

SRC = 
OBJ = main.o 6502.o
EXEC = tinker02

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

main.o: src/main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ src/main.cpp $(LBLIBS)

6502.o: lib/6502.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ lib/6502.cpp $(LBLIBS)

run:
	./$(EXEC)

clean:
	rm -rf $(OBJ) $(EXEC)