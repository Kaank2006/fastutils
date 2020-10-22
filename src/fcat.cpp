#include <iostream>
#include <fstream>

int main(int argc, char** argv){
	std::ifstream f(argv[1]);
	std::cout << f.rdbuf();
}
