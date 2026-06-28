//WAP to create menu-driven calculator.

#include <iostream>
using namespace std;

void add();
void subtract();
void multiply();
void divide();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n       MENU DRIVEN CALCULATOR";
        cout << "\n======================================";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                subtract();
                break;

            case 3:
                multiply();
                break;

            case 4:
                divide();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }
    } while(choice != 5);
    return 0;
}

void add(){
    float a, b;

    cout << "\nEnter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << "Result = " << a + b << endl;
}

void subtract(){
    float a, b;

    cout << "\nEnter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << "Result = " << a - b << endl;
}

void multiply(){
    float a, b;

    cout << "\nEnter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << "Result = " << a * b << endl;
}

void divide(){
    float a, b;

    cout << "\nEnter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    if(b == 0)
    {
        cout << "Division by Zero is Not Possible.\n";
    }
    else
    {
        cout << "Result = " << a / b << endl;
    }
}