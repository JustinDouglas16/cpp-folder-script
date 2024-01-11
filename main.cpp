#include <iostream>
#include <fstream>
//script to make files A-Z
int main() {
    std::string downloadsFolder = "C:\\Users\\Bitdynamics\\Downloads\\"; // Replace YourUsername with your actual username

    for (char letter = 'A'; letter <= 'Z'; ++letter) {
        std::string fileName = downloadsFolder + letter + ".txt";
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

//script to make folders A-Z
//#include <iostream>
//#include <windows.h>
//
//int main() {
//    std::string downloadsFolder = "C:\\Users\\Bitdynamics\\Downloads\\"; // Replace YourUsername with your actual username
//
//    for (char letter = 'A'; letter <= 'Z'; ++letter) {
//        std::string folderName = downloadsFolder + letter;
//
//        if (CreateDirectory(folderName.c_str(), NULL) || ERROR_ALREADY_EXISTS == GetLastError()) {
//            std::cout << "Folder created: " << folderName << std::endl;
//        } else {
//            std::cerr << "Unable to create folder: " << folderName << std::endl;
//        }
//    }
//
//    return 0;
//}