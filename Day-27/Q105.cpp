// WAP to student record management system

#include <iostream>
using namespace std;

struct Student{
    int rollNo;
    string name;
    float marks;
};

int main(){
    Student students[100];
    int count = 0;
    int choice;

    while (true){
        cout << "\n      STUDENT RECORD MANAGEMENT SYSTEM      \n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice){
        case 1:
        {
            cout << "\nEnter Roll Number: ";
            cin >> students[count].rollNo;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, students[count].name);

            cout << "Enter Marks: ";
            cin >> students[count].marks;

            count++;

            cout << "Student Added Successfully!\n";
            break;
        }

        case 2:
        {
            if (count == 0)
            {
                cout << "\nNo Records Found!\n";
            }
            else
            {
                cout << "\n      STUDENT RECORDS      \n";

                for (int i = 0; i < count; i++)
                {
                    cout << "\nRoll No : "<< students[i].rollNo;

                    cout << "\nName    : "<< students[i].name;

                    cout << "\nMarks   : "<< students[i].marks;

                    cout << "\n----------------------\n";
                }
            }
            break;
        }

        case 3:
        {
            int searchRoll;
            bool found = false;

            cout << "\nEnter Roll Number to Search: ";
            cin >> searchRoll;

            for (int i = 0; i < count; i++)
            {
                if (students[i].rollNo == searchRoll)
                {
                    cout << "\nStudent Found!\n";

                    cout << "Roll No : "<< students[i].rollNo << endl;

                    cout << "Name    : "<< students[i].name << endl;

                    cout << "Marks   : "<< students[i].marks << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "\nStudent Not Found!\n";
            }

            break;
        }

        case 4:
        {
            cout << "\nExiting Program...\n";
            return 0;
        }

        default:
        {
            cout << "\nInvalid Choice!\n";
        }
        }
    }
    return 0;
}