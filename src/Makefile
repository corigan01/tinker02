CXX = g++
CXXFLAGS = -Wall -std=c++20 -g 
LDFLAGS = 
LBLIBS = -lraylib

SRC = 
OBJ = main.o compiler/compiler.o
EXEC = tinker02

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ main.cpp $(LBLIBS)

compiler.o: compiler/compiler.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ compiler.cpp $(LBLIBS)

run:
	./$(EXEC)

clean:
	rm -rf $(OBJ) $(EXEC)