/*To run, paste:

g++ main.cpp -o app
.\app.exe

into the powershell terminal*/


#include <iostream>
#include <string>
#include <fstream>
#include "json.hpp" // Include the nlohmann/json library header

std::string gain(const std::string& message) {
    std::string x;
    std::cout << message;
    std::cout << ": ";
    std::getline(std::cin, x);
    return x;
}

int main() {

std::string safetyQuestion = gain("Wipe old data? (y/n)");
if (safetyQuestion == "y") {
    std::ofstream outFile("LocationData.json", std::ofstream::trunc); // Open the file in truncate mode to wipe old data
    outFile.close(); // Close the file after wiping


    while (true) { // Infinite loop to continuously ask for user input
    gain("Longitude");
    gain("Latitude");
    std::cout << "\n";

    
        
    }
}
else {
    std::cout << "Old data retained.\n";
}
}
