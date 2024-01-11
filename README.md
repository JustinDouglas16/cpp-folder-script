# Creating Folders and Files in C++

This repository contains two C++ programs that demonstrate how to create folders and files on a Windows machine using the Windows API.

## Create Files

### File: create_files.cpp

This program (`create_files.cpp`) creates text files from A to Z in the Downloads folder of a Windows user. The files are named "File_A.txt" to "File_Z.txt" and contain a simple message.

#### Usage:

1. Replace "YourUsername" with your actual Windows username in the `downloadsFolder` variable.
2. Compile and run the program.

```cpp
#include <iostream>
#include <fstream>

int main() {
    std::string downloadsFolder = "C:\\Users\\YourUsername\\Downloads\\";

    for (char letter = 'A'; letter <= 'Z'; ++letter) {
        std::string fileName = downloadsFolder + "File_" + letter + ".txt";
        std::ofstream file(fileName);

        if (file.is_open()) {
            file << "This is file " << letter;
            file.close();
            std::cout << "File created: " << fileName << std::endl;
        } else {
            std::cerr << "Unable to create file: " << fileName << std::endl;
        }
    }

    return 0;
}
