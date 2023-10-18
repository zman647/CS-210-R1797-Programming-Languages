// grocer.cpp

#include "grocer.h"
#include <iostream>
#include <fstream>

Grocer::Grocer(const std::string& filename) {
    std::ifstream inputFile(filename);
    std::string item;
    int freq;

    while (inputFile >> item >> freq) {
        itemsFrequency[item] = freq;
    }
    inputFile.close();
}
//get item frequency function
int Grocer::getItemFrequency(const std::string& item) {
    return itemsFrequency[item];
}
//display all function
void Grocer::displayFrequencies() {
    for (const auto& pair : itemsFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}
//display all as asterisk histogram function
void Grocer::displayHistogram() {
    for (const auto& pair : itemsFrequency) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

const std::map<std::string, int>& Grocer::getAllFrequencies() const {
    return itemsFrequency;
}








