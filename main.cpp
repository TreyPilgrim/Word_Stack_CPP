/*
 * Name: Trey Fullwood
 * NetID: rf802
 * Description: This program will ask for words to be entered.
 *              When the computer reads "STOP", the operation will end and
 *              the inputs will be displayed in the opposite order they were entered
 */
#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
    Stack wordPlate;
    string word;

    cout << "Hello, this program is wordy..." << endl;
    cout << "Enter words until your heart is content." << endl;
    cout << "When the word 'STOP' is entered, the sequence will end," << endl;
    cout << "and the words entered will be displayed in the opposite order they were entered.\n";

    while (word != "STOP")
    {
        cout << "Enter a word: ";
        getline(cin, word);

        if(word == "STOP")
            break;

        wordPlate.push(word);
    }

    while (wordPlate.pop(word))
    {
        cout << word << endl;
    }

    return 0;
}
