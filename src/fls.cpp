#include <iostream>
#include <filesystem>

int main(const int argc, const char** argv){
  try{
    if (argc > 1) {
      const std::string path = argv[1];
      for (const auto &entry : std::filesystem::directory_iterator(path)){
      std::cout << entry.path() << "\n";
      }
    }
    else {
      const std::string path = ".";
      for (const auto &entry : std::filesystem::directory_iterator(path)){
      std::cout << entry.path() << "\n";
      }
    }
  }
  catch (...) {
    std::cout << "Are you sure that such directory exists and you have the permission to read it?" << '\n';
  }


}
