PROJECT_NAME = Calculator

SRC = Calculator.cpp\
Fraction/Fraction.cpp\
Complex/Calculator.cpp\

INC = -IFraction\
-IComplex

TEST_SRC = TestCalculator.cpp

all:
	g++ $(SRC) $(TEST_SRC) $(INC) -o $(PROJECT_NAME).out -lgtest -lgtest_main -lpthread
	
run: all
	./$(PROJECT_NAME).out

test:
	make -c Complex
	make -c Fraction
	make run

clean:
	rm -rf *.out