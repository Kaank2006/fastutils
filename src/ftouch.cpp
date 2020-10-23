#include <fstream>

int main(const int argc, const char** argv)
{
    if (argc > 1) {
    std::ofstream file (argv[1]);
    }
    else {
      std::cout << "Please enter a valid filename." << '\n';
    }
}
