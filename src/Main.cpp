#include <iostream>

std::string FizzBuzz(int num) {
	std::string out;
	
	if (num % 3 == 0) out += "Fizz";
	if (num % 7 == 0) out += "Buzz";
	
	return out;
}

int main() {
	for (int i = 0; i < 100; i++) {
		std::cout << i << ": " << FizzBuzz(i) << std::endl;
	}
}