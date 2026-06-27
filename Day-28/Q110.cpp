//WAP to create bank account system.

#include <iostream>
#include <string>
using namespace std;

struct Account{
    int accNo;
    string name;
    float balance;
};

Account bank[100];
int count = 0;

// Function Prototypes
void createAccount();
void displayAccounts();
void depositMoney();
void withdrawMoney();

int main(){
    int choice;

    do
    {
        cout << "\n      BANK ACCOUNT SYSTEM     \n";
        cout << "\n1. Create Account";
        cout << "\n2. Display Accounts";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                depositMoney();
                break;

            case 4:
                withdrawMoney();
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

void createAccount()
{
    int n;

    cout << "\nHow many accounts do you want to create? ";
    cin >> n;

    if(count + n > 100)
    {
        cout << "\nBank Database Full!\n";
        return;
    }

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nAccount " << i + 1 << endl;

        cout << "Enter Account Number : ";
        cin >> bank[count].accNo;
        cin.ignore();

        cout << "Enter Account Holder Name : ";
        getline(cin, bank[count].name);

        cout << "Enter Initial Balance : ";
        cin >> bank[count].balance;

        count++;
    }

    cout << "\nAccount(s) Created Successfully.\n";
}

void displayAccounts()
{
    if(count == 0)
    {
        cout << "\nNo Accounts Found.\n";
        return;
    }

    cout << "\n==========================================================\n";
    cout << "Acc No\tName\t\t\tBalance\n";
    cout << "==========================================================\n";

    for(int i = 0; i < count; i++)
    {
        cout << bank[i].accNo << "\t"<< bank[i].name << "\t\t"<< bank[i].balance << endl;
    }
}

void depositMoney()
{
    int accNo;
    float amount;
    bool found = false;

    cout << "\nEnter Account Number : ";
    cin >> accNo;

    for(int i = 0; i < count; i++){
        if(bank[i].accNo == accNo)
        {
            found = true;

            cout << "Enter Deposit Amount : ";
            cin >> amount;

            bank[i].balance += amount;

            cout << "\nMoney Deposited Successfully.";
            cout << "\nUpdated Balance : " << bank[i].balance << endl;

            break;
        }
    }

    if(!found)
        cout << "\nAccount Not Found.\n";
}

void withdrawMoney()
{
    int accNo;
    float amount;
    bool found = false;

    cout << "\nEnter Account Number : ";
    cin >> accNo;

    for(int i = 0; i < count; i++)
    {
        if(bank[i].accNo == accNo)
        {
            found = true;

            cout << "Enter Withdrawal Amount : ";
            cin >> amount;

            if(amount <= bank[i].balance)
            {
                bank[i].balance -= amount;

                cout << "\nWithdrawal Successful.";
                cout << "\nRemaining Balance : " << bank[i].balance << endl;
            }
            else
            {
                cout << "\nInsufficient Balance.\n";
            }
            break;
        }
    }

    if(!found)
        cout << "\nAccount Not Found.\n";
}