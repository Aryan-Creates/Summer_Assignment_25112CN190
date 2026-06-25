//WAP to check voting eligibility.

#include <iostream>
using namespace std;

int main(){
    string name;
    int age;

    cout << "     VOTING ELIGIBILITY SYSTEM     \n";

    cout << "Enter Your Name: ";
    getline(cin, name);

    cout << "Enter Your Age: ";
    cin >> age;

    cout << "\n      VOTER DETAILS      \n";
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;

    if(age >= 18)
    {
        cout << "Status : Eligible For Voting" << endl;
    }
    else if (age < 0)
    {
        cout << "Invalid age" << endl;
    }
    
    else
    {
        cout << "Status : Not Eligible For Voting" << endl;
    }
    return 0;
}