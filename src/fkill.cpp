#include <iostream>

int main(int &argc, char** argv) {
	kill(argv[1], SIGTERM)
}
