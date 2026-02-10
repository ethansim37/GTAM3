/*To run, paste:

g++ main.cpp -o app
.\app.exe

into the powershell terminal*/


#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: "; // "cout" means "console output" and is used to print text to the console.
                                      // The "<<" operator is used to send the string "Enter your name: " to the console.
    std::getline(std::cin, name); // "getline" is a function that reads a line of text from the console and stores it in the variable "name".

    std::cout << "Hello " << name << "!"; // This line prints "Hello " followed by the value of
                                        // the variable "name" and an exclamation mark to the console.
}
