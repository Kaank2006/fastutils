#include <iostream>
#include <fstream>

int main(const int argc, const char** argv){

	const std::ifstream f(argv[1]);
	if(f.is_open()){
	std::cout << f.rdbuf();
	}
	else {
		std::cout << "Are you sure there is such file and that you have access to it?" << '\n';
		return 1;
	}
}
