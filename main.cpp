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

std::list<double> longitudeList; // Create a list to store the data
std::list<double> latitudeList; // Create a list to store the data

void gainLongAndLat(){
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

int main() {

std::string menu = gain("Create a new file (1), use existing file (2), or exit (3)");
if (menu == "1") {
    std::string newFileName = gain("Enter the name of the new file (Include .json at the end)");

    gainLongAndLat(); //Gain info from user and store in lists
    
    std::ofstream file(newFileName, std::ofstream::trunc); // Create a new file and open it in truncate mode to ensure it's empty
    nlohmann::json jsonData; // Create a JSON object
    jsonData["longitude"] = longitudeList; // Add the list of data to the JSON
    jsonData["latitude"] = latitudeList; // Add the list of data to the JSON object
    file << jsonData.dump(4); // Write the JSON object to the file with indentation
    file.close(); // Close the file after writing

}
else if (menu == "2") {
    std::string oldFileName = gain("What is the name of the file you want to use? (Include .json at the end)");

    std::string safetyCheck = gain("Are you sure you want to use this file, will wipe existing data? (y/n)");
    if (safetyCheck == "y") {
        gainLongAndLat(); //Gain info from user and store in lists

        std::ofstream outFile(oldFileName, std::ofstream::trunc); // Open the file in truncate mode to wipe old data
        nlohmann::json jsonData; // Create a JSON object
        jsonData["longitude"] = longitudeList; // Add the list of data to the JSON object
        jsonData["latitude"] = latitudeList; // Add the list of data to the JSON object
        outFile << jsonData.dump(4); // Write the JSON object to the file with indentation
        outFile.close(); // Close the file after writing
    
    }else if (safetyCheck == "n") {
        std::cout << "Exiting program.\n";
    }
}
else if (menu == "3") {
    std::cout << "Exiting program.\n";
}
}
