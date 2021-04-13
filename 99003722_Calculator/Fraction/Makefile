PROJECT_NAME = Fraction
SRC = Fraction.cpp
TEST_SRC = TestFraction.cpp

all:
	g++ $(SRC) $(TEST_SRC) -o $(PROJECT_NAME).out -lgtest -lgtest_main -lpthread

run: all
	./$(PROJECT_NAME).out

clean:
	rm -rf *.out