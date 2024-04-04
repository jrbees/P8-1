// Jonah Bees-03/30/2024
#include <iostream>
#include <string>
using namespace std;

int countVowel(string str);

int main() {
    string input;

    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);

        if (input == "Q" || input == "q") {
            return 0;
        }


        int vowelCount = countVowel(input);
        cout << "Vowel count: " << vowelCount << endl;


    }
    return 0;
}
int countVowel(string str) {
    int vowel = 0;

    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
        case 'a': vowel++; break;
        case 'e': vowel++; break;
        case 'i': vowel++; break;
        case 'o': vowel++; break;
        case 'u': vowel++; break;
        case 'A': vowel++; break;
        case 'E': vowel++; break;
        case 'I': vowel++; break;
        case 'O': vowel++; break;
        case 'U': vowel++; break;
            vowel++;
            break;

        }
    }


    return vowel;
}