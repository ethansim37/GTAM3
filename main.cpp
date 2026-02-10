/*To run, paste:

g++ main.cpp -o app
.\app.exe

into the terminal*/


#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: "; // "cout" means "console output" and is used to print text to the console.
                                      // The "<<" operator is used to send the string "Enter your name: " to the console.
    std::getline(std::cin, name);

    std::cout << "Hello " << name << "!";
    std::delay(5000); // Wait for 5 seconds before closing the console window
}
