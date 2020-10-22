#include <iostream>
#include <fstream>

int main(const int argc, const char** argv){
	const std::ifstream f(argv[1]);
	std::cout << f.rdbuf();
}
