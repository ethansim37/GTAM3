/*To run for the first time or after changes to code, paste:

g++ main.cpp -o GTAM_Point_Dropper
.\GTAM_Point_Dropper.exe

into the powershell terminal

after that, paste:   .\GTAM_Point_Dropper.exe

into the powershell terminal*/


#include <iostream>
#include <string>
#include <fstream>
#include "json.hpp" // Include the nlohmann/json library header
#include <list>

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
    std::list<double> longitudeList; // Create a list to store the data
    std::list<double> latitudeList; // Create a list to store the data

    std::ofstream outFile("LocationData.json", std::ofstream::trunc); // Open the file in truncate mode to wipe old data
    outFile.close(); // Close the file after wiping


    while (true) { // Infinite loop to continuously ask for user input
    std::string longitude = gain("Longitude (Enter 'exit' to stop)");

    if (longitude == "exit"){
        std::cout << "Exiting program.\n";

        for (double car : longitudeList) {
            std:: cout << car << "\n";
        }

        for (double car : latitudeList) {
            std:: cout << car << "\n";
        }

        std::ofstream outFile("LocationData.json", std::ofstream::trunc); // Open the file in truncate mode to wipe old data
        nlohmann::json jsonData; // Create a JSON object
        jsonData["longitude"] = longitudeList; // Add the list of data to the JSON object
        jsonData["latitude"] = latitudeList; // Add the list of data to the JSON object
        outFile << jsonData.dump(4); // Write the JSON object to the file with indentation
        outFile.close(); // Close the file after writing

        break; // Exit the loop if the user types "exit"
    }

    std::string latitude = gain("Latitude");
    std::cout << "\n";
    
    longitudeList.push_back(std::stod(longitude));
    latitudeList.push_back(std::stod(latitude));
    }
}
else {
    std::cout << "Old data retained.\n";
}
}
