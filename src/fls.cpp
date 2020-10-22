#include <iostream>
#include <filesystem>

int main(const int argc, const char** argv){
    const std::string path = argv[1];
    for (const auto &entry : std::filesystem::directory_iterator(path)){
        std::cout << entry.path() << "\n";
    }
}
