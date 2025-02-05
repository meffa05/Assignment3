#include <iostream>
#include <conio.h>

//Maddie Effa Assignment 3

using namespace std;

struct Entries {
    string type;
    string input;
};





int main()
{
    const int SIZE = 11;//number of things the user has to enter
    Entries entry[SIZE] = {
    {"name", ""},
    {"animal", ""},
    {"pet name", ""},
    {"relitive", ""},
    {"emotion", ""},
    {"object", ""},
    {"verb ending in ed", ""},
    {"food", ""},
    {"decriptive word", ""},
    {"verb ending in ed", ""},
    {"verb ending in ed", ""}
    };
    Entries e;

    for (int i = 0; i < SIZE; i++)//prompt user loop
    {
        e = entry[i];
        cout << (i+1)<< ". Enter a " << e.type << ":";
        cin >> entry[i].input;
    }

    cout << "If you would like to change an answer, please enter the number. If not, press 0: ";
    int UserInput = 0;
    cin >> UserInput;
    if (UserInput > 0)
    {
        cout << "Enter a " << entry[UserInput - 1].type<< ": ";
        cin >> entry[UserInput - 1].input;
        //cout << "If you would like to change an answer, please enter the number. If not, press 0: ";
    }

   cout << entry[0].input << " went to the park with their pet " << entry[1].input << " named " << entry[2].input << ". When they got there, they saw their " << entry[3].input << ". This made them very " << entry[4].input << ". They decided to go and play on the " << entry[5].input << " with the other kids. They " << entry[6].input << " the other kids for hours. After, they walked to the store and bought " << entry[7].input << " for dinner. It was very " << entry[8].input << "Finally, they " << entry[9].input << " their teeth for bed and " << entry[10].input << " their pet goodnight.";


    (void)_getch();//wait for key press
    return 0;
}