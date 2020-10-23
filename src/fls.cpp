#include <iostream>
#include <boost/filesystem.hpp>

int main(const int argc, const char** argv){
    const std::string path = argv[1];
    for (const auto &entry : std::filesystem::directory_iterator(argv[1])){
        std::cout << entry.path() << "\n";
    }
}
