//WAP to make ATM simulation.

#include <iostream>
using namespace std;

int main(){
    int choice;
    float balance = 5000, amount;

    while(true){
        cout << "\n      ATM SIMULATION      \n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter Amount to Deposit: ";
                cin >> amount;

                balance += amount;

                cout << "Deposit Successful!" << endl;
                cout << "Updated Balance: Rs. " << balance << endl;
                break;

            case 3:
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;

                if(amount <= balance)
                {
                    balance -= amount;

                    cout << "Withdrawal Successful!" << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                else
                {
                    cout << "Insufficient Balance!" << endl;
                }
                break;

            case 4:
                cout << "Thank You For Using ATM." << endl;
                return 0;

            default:
                cout << "Invalid Choice!" << endl;
        }
    }
    return 0;
}