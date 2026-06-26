#include <iostream>
using namespace std;

#define MAX 100

struct Student{
    int roll;
    string name;
    int maths, science, english;
    int total;
    float percentage;
};

Student s[MAX];
int n = 0;

void addStudent(){
    if(n == MAX)
    {
        cout << "Storage Full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> s[n].roll;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s[n].name);

    cout << "Enter Maths Marks: ";
    cin >> s[n].maths;

    cout << "Enter Science Marks: ";
    cin >> s[n].science;

    cout << "Enter English Marks: ";
    cin >> s[n].english;

    s[n].total = s[n].maths + s[n].science + s[n].english;

    s[n].percentage = s[n].total / 3.0;

    n++;

    cout << "Record Added Successfully!\n";
}

void displayAll(){
    if(n == 0)
    {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n      ALL STUDENT RECORDS      \n";

    for(int i = 0; i < n; i++){
        cout << "\nRoll No    : " << s[i].roll;
        cout << "\nName       : " << s[i].name;
        cout << "\nMaths      : " << s[i].maths;
        cout << "\nScience    : " << s[i].science;
        cout << "\nEnglish    : " << s[i].english;
        cout << "\nTotal      : " << s[i].total;
        cout << "\nPercentage : " << s[i].percentage;
        cout << "\n------------------------\n";
    }
}

void searchStudent(){
    int roll;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for(int i = 0; i < n; i++){
        if(s[i].roll == roll)
        {
            char grade;

            if(s[i].percentage >= 75)
                grade = 'A';
            else if(s[i].percentage >= 60)
                grade = 'B';
            else if(s[i].percentage >= 40)
                grade = 'C';
            else
                grade = 'F';

            cout << "\n      MARKSHEET      \n";

            cout << "Roll No    : " << s[i].roll << endl;
            cout << "Name       : " << s[i].name << endl;
            cout << "Maths      : " << s[i].maths << endl;
            cout << "Science    : " << s[i].science << endl;
            cout << "English    : " << s[i].english << endl;
            cout << "Total      : " << s[i].total << endl;
            cout << "Percentage : " << s[i].percentage << endl;
            cout << "Grade      : " << grade << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Record Not Found!\n";
    }
}

int main(){
    int choice;

    while(true)
    {
        cout << "\n      MARKSHEET GENERATION SYSTEM      \n";
        cout << "1. Add Student\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Marksheet\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addStudent();
                break;

            case 2:
                displayAll();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                cout << "Exiting Program...\n";
                return 0;

            default:
                cout << "Invalid Choice!\n";
        }
    }
    return 0;
}