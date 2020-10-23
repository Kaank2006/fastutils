#include <iostream>
#include <unistd.h>

int main(const int argc, const char** argv){
  if (argc <= 1 ) {
    std::cout << "Please enter a valid name." << '\n';
    return 1;
  }
  else if ( access( argv[1], F_OK ) != -1 ) {
    remove(argv[1]);
    return 0;
  }
  else {
    std::cout << "No such file." << '\n';
  }
}
