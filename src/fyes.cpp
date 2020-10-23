#include <iostream>

int main(const int argc, const char** argv){
	while(argc > 1){
	std::cout << argv[1] << "\n";
	}
	while (argc <= 1) {
		std::cout << "y" << '\n';
	}
}
