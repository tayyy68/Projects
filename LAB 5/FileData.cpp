#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

// Function to reverse a string
string Reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    
    return count;
}

// Function to capitalize second letter of each word
string capitalizeSecondLetter(string str) {
    bool newWord = true;
    int letterCount = 0;
    
    for (size_t i = 0; i < str.length(); ++i) {
        if (newWord) {
            letterCount = 0;
            newWord = false;
        }
        
        if (isalpha(str[i])) {
            letterCount++;
            if (letterCount == 2) {
                str[i] = toupper(str[i]);
            }
        } else if (isspace(str[i])) {
            newWord = true;
        }
    }
    
    return str;
}

int main() {
    // Read from file
    ifstream inputFile("input.txt");
    string fileData;
    
    if (inputFile.is_open()) {
        getline(inputFile, fileData);
        inputFile.close();
    } else {
        cerr << "Unable to open file. Using default string." << endl;
        fileData = "This is the Advanced Computer Programming Module";
    }
    
    // Display original string
    cout << "Original string: " << fileData << endl << endl;
    
    // Count and display vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;
    
    // Count and display words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;
    
    // Reverse and display the string
    string reversedStr = Reverse(fileData);
    cout << "Reversed string: " << reversedStr << endl;
    
    // Capitalize second letter of each word and display
    string capitalizedStr = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letters: " << capitalizedStr << endl;
    
    return 0;
}