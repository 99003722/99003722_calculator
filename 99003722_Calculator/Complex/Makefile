PROJECT_NAME = Complex
SRC = Complex.cpp
TEST_SRC = TestComplex.cpp

all:
	g++ $(SRC) $(TEST_SRC) -o $(PROJECT_NAME).out -lgtest -lgtest_main -lpthread

run: all
	./$(PROJECT_NAME).out

clean:
	rm -rf *.out