//WAP to create Contact management system.

#include <iostream>
#include <string>
using namespace std;

struct Contact{
    string name;
    string phone;
};

Contact contacts[100];
int count = 0;

void addContact();
void viewContacts();
void searchContact();
void deleteContact();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n    CONTACT MANAGEMENT SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Add Contact";
        cout << "\n2. View Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                viewContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
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

void addContact()
{
    int n;

    cout << "\nHow many contacts do you want to add? ";
    cin >> n;
    cin.ignore();

    if(count + n > 100)
    {
        cout << "\nContact List is Full!\n";
        return;
    }

    for(int i = 0; i < n; i++)
    {
        cout << "\nContact " << i + 1 << endl;

        cout << "Enter Name : ";
        getline(cin, contacts[count].name);

        cout << "Enter Phone Number : ";
        getline(cin, contacts[count].phone);

        count++;
    }

    cout << "\nContact(s) Added Successfully.\n";
}

void viewContacts()
{
    if(count == 0)
    {
        cout << "\nNo Contacts Found.\n";
        return;
    }

    cout << "\n==============================================\n";
    cout << "Name\t\t\tPhone Number\n";
    cout << "==============================================\n";

    for(int i = 0; i < count; i++)
    {
        cout << contacts[i].name << "\t\t"<< contacts[i].phone << endl;
    }
}

void searchContact()
{
    string name;
    bool found = false;

    cin.ignore();

    cout << "\nEnter Contact Name : ";
    getline(cin, name);

    for(int i = 0; i < count; i++)
    {
        if(contacts[i].name == name)
        {
            cout << "\nContact Found\n";
            cout << "Name : " << contacts[i].name << endl;
            cout << "Phone Number : " << contacts[i].phone << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "\nContact Not Found.\n";
    }
}

void deleteContact()
{
    string name;
    bool found = false;

    cin.ignore();

    cout << "\nEnter Contact Name : ";
    getline(cin, name);

    for(int i = 0; i < count; i++)
    {
        if(contacts[i].name == name)
        {
            found = true;

            for(int j = i; j < count - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }

            count--;

            cout << "\nContact Deleted Successfully.\n";
            break;
        }
    }

    if(!found)
    {
        cout << "\nContact Not Found.\n";
    }
}