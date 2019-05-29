



// Bryan Carranza
// This program features a recursive function that returns the number of vowels in a string. The program takes in a word or sentence provided by the user and finds the number of vowels.

#include <iostream>
#include <string>

using namespace std;

int vowels(string inputStr) // initializes the variable vowels for string input
{
    if (inputStr.length() == 0) // if statement to define return if the length of the string is 0
        return 0;
    
    int count = vowels(inputStr.substr(1)); // initializes the variable count to tally the number of vowels
    
    switch (inputStr.at(0)) // switch statement to search string input for vowels
    {
        case 'a': // switch case for lower-case 'a'
        case 'e': // switch case for lower-case 'e'
        case 'i': // switch case for lower-case 'i'
        case 'o': // switch case for lower-case 'o'
        case 'u': // switch case for lower-case 'u'
        case 'A': // switch case for upper-case 'A'
        case 'E': // switch case for upper-case 'E'
        case 'I': // switch case for upper-case 'I'
        case 'O': // switch case for upper-case 'O'
        case 'U': // switch case for upper-case 'U'
            return count + 1; // defines return if vowel is found in string input
            
        default: // switch default
            return count; // return full count of vowels in string input
    }
}

int main() // begins main program function
{
    string inputStr; // initializes string variable for input string
    cout << endl << "---Welcome to the Automatic Vowel-Counter---"; // output for welcome message and identifies program
    cout << endl << "Please enter a word or sentence of your choice: "; // prompts user to input word or sentence for string input
    getline(cin, inputStr); // takes user input as string and runs switch statement to count vowels
    cout << endl << "The number of vowels in your input is: " << vowels(inputStr) << endl; // output to display final count of vowels
    
    return 0;
}

