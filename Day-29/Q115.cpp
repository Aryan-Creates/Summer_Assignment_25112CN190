//WAP to create menu-driven string operation system.

#include <iostream>
#include <string>
using namespace std;

string str1, str2;

void inputStrings();
void findLength();
void copyString();
void concatenateStrings();
void compareStrings();
void reverseString();

int main(){
    int choice;

    inputStrings();

    do
    {
        cout << "\n======================================";
        cout << "\n    STRING OPERATIONS SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Find Length";
        cout << "\n2. Copy String";
        cout << "\n3. Concatenate Strings";
        cout << "\n4. Compare Strings";
        cout << "\n5. Reverse String";
        cout << "\n6. Enter New Strings";
        cout << "\n7. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                findLength();
                break;

            case 2:
                copyString();
                break;

            case 3:
                concatenateStrings();
                break;

            case 4:
                compareStrings();
                break;

            case 5:
                reverseString();
                break;

            case 6:
                cin.ignore();
                inputStrings();
                break;

            case 7:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 7);

    return 0;
}

void inputStrings(){
    cout << "\nEnter First String : ";
    getline(cin, str1);

    cout << "Enter Second String : ";
    getline(cin, str2);
}

void findLength(){
    cout << "\nLength of First String : " << str1.length() << endl;
    cout << "Length of Second String : " << str2.length() << endl;
}

void copyString(){
    string copy = str1;
    cout << "\nCopied String : " << copy << endl;
}

void concatenateStrings(){
    string result = str1 + str2;
    cout << "\nConcatenated String : " << result << endl;
}

void compareStrings(){
    if(str1 == str2)
        cout << "\nBoth Strings are Equal.\n";
    else
        cout << "\nBoth Strings are Different.\n";
}

void reverseString(){
    string rev = str1;

    int start = 0;
    int end = rev.length() - 1;

    while(start < end)
    {
        char temp = rev[start];
        rev[start] = rev[end];
        rev[end] = temp;

        start++;
        end--;
    }

    cout << "\nReversed String : " << rev << endl;
}