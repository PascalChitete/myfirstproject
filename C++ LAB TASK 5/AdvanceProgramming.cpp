#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string reverseString(string text) 
{
    string reversedText = text;
    int length = reversedText.length();
    for (int i = 0; i < length / 2; i++) {
        char temp = reversedText[i];
        reversedText[i] = reversedText[length - i - 1];
        reversedText[length - i - 1] = temp;
    }
    return reversedText;
}

int main() 
{
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) 
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    getline(inputFile, fileData);

    inputFile.close();

    int vowelCount = 0;
    for (char c : fileData) 
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }

    int wordCount = 0;
    bool inWord = false;
    for (char c : fileData) 
    {
        if (c == ' ') 
        {
            inWord = false;
        } else if (!inWord && c != '\t' && c != '\n') 
        {
            wordCount++;
            inWord = true;
        }
    }

    string reversedStatement = reverseString(fileData);

    string capitalizedStatement = fileData;
    bool capitalize = false;
    for (size_t i = 0; i < capitalizedStatement.length(); ++i) 
    {
        if (isalpha(capitalizedStatement[i]) && !isspace(capitalizedStatement[i])) 
        {
            if (capitalize) 
            {
                if (islower(capitalizedStatement[i])) 
                {
                    capitalizedStatement[i] = toupper(capitalizedStatement[i]);
                }
                capitalize = false;
            } else 
            {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of words: " << wordCount << endl;
    cout << "Reversed statement: " << reversedStatement << endl;
    cout << "Capitalized second letters: " << capitalizedStatement << endl;

    return 0;
}
