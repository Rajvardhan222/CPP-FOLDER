#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    // Specify the file name you want to analyze
    std::string fileName = "C://Users//Admin//Desktop//CPP FOLDER//test.txt";

    // Open the file in read mode
    std::ifstream inputFile(fileName);

    // Check if the file is opened successfully
    if (!inputFile.is_open()) {
        std::cout << "Error opening file '" << fileName << "'!" << std::endl;
        return 1; // Return a non-zero value to indicate an error
    }

    // Variables to store counts
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    std::string line;

    // Read the file line by line
    while (std::getline(inputFile, line)) {
        lineCount++;  // Increment line count

        // Count words and characters in each line
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            wordCount++;          // Increment word count
            charCount += word.length();  // Increment character count
        }
    }

    // Display the statistics
    std::cout << "File Statistics for '" << fileName << "':" << std::endl;
    std::cout << "Lines: " << lineCount << std::endl;
    std::cout << "Words: " << wordCount << std::endl;
    std::cout << "Characters: " << charCount << std::endl;

    // Close the file
    inputFile.close();

    return 0;
}
