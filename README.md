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
```
## Create Folders

### File: create_folders.cpp

This program (`create_folders.cpp`) creates folders from A to Z in the Downloads folder of a Windows user. The folders are named "Folder_A" to "Folder_Z".

#### Usage:

1. Replace "YourUsername" with your actual Windows username in the `downloadsFolder` variable.
2. Compile and run the program.

```cpp
#include <iostream>
#include <windows.h>

int main() {
    std::string downloadsFolder = "C:\\Users\\YourUsername\\Downloads\\";

    for (char letter = 'A'; letter <= 'Z'; ++letter) {
        std::string folderName = downloadsFolder + "Folder_" + letter;

        if (CreateDirectory(folderName.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError()) {
            std::cout << "Folder created: " << folderName << std::endl;
        } else {
            std::cerr << "Unable to create folder: " << folderName << std::endl;
        }
    }

    return 0;
}
```