#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

// 🔹 Function to reverse text
string Reverse(string text) {
    string rev = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        rev += text[i];
    }
    return rev;
}

// 🔹 Function to capitalize second letter of each word
string capitalizeSecond(string text) {
    bool newWord = true;

    for (int i = 0; i < text.length(); i++) {
        if (newWord && i + 1 < text.length()) {
            text[i + 1] = toupper(text[i + 1]);
            newWord = false;
        }

        if (text[i] == ' ') {
            newWord = true;
        }
    }

    return text;
}

int main() {
    ifstream file("file.txt"); // open file
    string fileData;

    // 🔹 Read content from file
    getline(file, fileData);
    file.close();

    // 🔹 Count vowels
    int vowels = 0;
    for (char c : fileData) {
        c = tolower(c);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            vowels++;
        }
    }

    // 🔹 Count words
    int words = 1;
    for (char c : fileData) {
        if (c == ' ') {
            words++;
        }
    }

    // 🔹 Output results
    cout << "Original Text: " << fileData << endl;
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of words: " << words << endl;
    cout << "Reversed Text: " << Reverse(fileData) << endl;
    cout << "Modified Text: " << capitalizeSecond(fileData) << endl;

    return 0;
}