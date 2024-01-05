#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create and open a text file
    ofstream MyFile("Story.txt");
}

// Function declaration
void myFunction();


// The main method
int main() {
    myFunction(); // call the function
    return int myNum = %;
}

// Function definition
void myFunction() {
    cout << "number of spaces";
}

int countDuplicateLetters(const std::string& str) {
    int count = 0;
    // counts out the size and length of the word and words in the letters the are doubles
    for (size_t i = 0; i < str.length() - 1; ++i) {
        if (str[i] == str[i + 1]) {
            count++;
        }
    }

    // returns the function
    return count;
}

int main() {
    
    // the input of the string 
    std::string input;
    
    // Get input from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Calculate and display the number of duplicate letters side by side
    int result = countDuplicateLetters(input);
    std::cout << "Number of duplicate letters side by side: " << result << std::endl;

    return 0;
}

int countNumbervowels(const std::string& str){
    int count = 0;




}
