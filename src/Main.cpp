#include <iostream>

std::string fizzBuzzSolver(int num) {
	std::string out;
	
	if (num % 3 == 0) out += "Fizz";
	if (num % 7 == 0) out += "Buzz";
	
	return out;
}

int main() {
	std::cout << "Welcome to the FizzBuzz solver" << std::endl;
	
	bool run = true;
	while(run) {
		int inp = 0;
		std::cout << "Input an integer" << std::endl << "(type '-1' to terminate the program)" << std::endl;
		std::cin >> inp;
		
		if (inp == -1) {
			run = false;
			break;
		}
		else std::cout << fizzBuzzSolver(inp) << std::endl << std::endl;
	}
}