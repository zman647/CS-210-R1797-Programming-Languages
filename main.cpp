
// main.cpp

#include "grocer.h"
#include <iostream>
#include <fstream>

int main() {
    Grocer grocer("CS210_Project_Three_Input_File.txt");

    // Write to backup file
    std::ofstream backupFile("frequency.dat");
    for (const auto& pair : grocer.getAllFrequencies()) {  // Use the new method
        backupFile << pair.first << " " << pair.second << std::endl;
    }
    backupFile.close();
    //cout print statements are below.
    int choice;
    do {
        std::cout << "1. Search for item frequency\n";
        std::cout << "2. Display all frequencies\n";
        std::cout << "3. Display histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
//switch case statements with input validation that call upon grocer.cpp as a main function. This allows the program to be well organized
        switch (choice) {
        case 1: {
            std::string item;
            std::cout << "Enter item: ";
            std::cin >> item;
            std::cout << "Frequency: " << grocer.getItemFrequency(item) << std::endl;
            break;
        }
        case 2:
            grocer.displayFrequencies();
            break;
        case 3:
            grocer.displayHistogram();
            break;
        case 4:
            std::cout << "Exiting the program...\n";
            break;
        default:
            std::cout << "Invalid option! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
