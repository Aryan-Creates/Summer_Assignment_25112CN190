//WAP to create ticket booking system.

#include <iostream>
#include <string>
using namespace std;

struct Ticket{
    int ticketNo;
    string name;
    int seatNo;
    bool booked;
};

Ticket tickets[100];
int count = 0;

void bookTicket();
void viewTickets();
void cancelTicket();

int main(){
    int choice;

    do
    {
        cout << "\n======================================";
        cout << "\n      TICKET BOOKING SYSTEM";
        cout << "\n======================================";
        cout << "\n1. Book Ticket";
        cout << "\n2. View Booked Tickets";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";
        cout << "\n--------------------------------------";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                viewTickets();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}

void bookTicket()
{
    int n;

    cout << "\nHow many tickets do you want to book? ";
    cin >> n;

    if(count + n > 100)
    {
        cout << "\nBooking Limit Exceeded!\n";
        return;
    }

    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "\nPassenger " << i + 1 << endl;

        cout << "Enter Ticket Number : ";
        cin >> tickets[count].ticketNo;
        cin.ignore();

        cout << "Enter Passenger Name : ";
        getline(cin, tickets[count].name);

        cout << "Enter Seat Number : ";
        cin >> tickets[count].seatNo;

        tickets[count].booked = true;

        count++;
    }

    cout << "\nTicket(s) Booked Successfully.\n";
}

void viewTickets()
{
    if(count == 0)
    {
        cout << "\nNo Tickets Booked.\n";
        return;
    }

    cout << "\n==============================================================\n";
    cout << "Ticket No\tPassenger Name\t\tSeat No\n";
    cout << "==============================================================\n";

    for(int i = 0; i < count; i++)
    {
        if(tickets[i].booked)
        {
            cout << tickets[i].ticketNo << "\t\t"<< tickets[i].name << "\t\t"<< tickets[i].seatNo << endl;
        }
    }
}

void cancelTicket()
{
    int ticketNo;
    bool found = false;

    cout << "\nEnter Ticket Number : ";
    cin >> ticketNo;

    for(int i = 0; i < count; i++)
    {
        if(tickets[i].ticketNo == ticketNo && tickets[i].booked)
        {
            found = true;

            for(int j = i; j < count - 1; j++)
            {
                tickets[j] = tickets[j + 1];
            }

            count--;

            cout << "\nTicket Cancelled Successfully.\n";
            break;
        }
    }

    if(!found)
    {
        cout << "\nTicket Not Found.\n";
    }
}