/*Write a program to Create ticket booking 
system. */

#include <iostream>
using namespace std;

class TicketBooking {
    int seats[10];

public:
    TicketBooking() {
        for (int i = 0; i < 10; i++) {
            seats[i] = 0; // 0 = Available, 1 = Booked
        }
    }

    void showSeats() {
        cout << "\n----- Seat Status -----\n";
        for (int i = 0; i < 10; i++) {
            cout << "Seat " << i + 1 << " : ";
            if (seats[i] == 0)
                cout << "Available";
            else
                cout << "Booked";
            cout << endl;
        }
    }

    void bookTicket() {
        int seatNo;
        cout << "Enter Seat Number (1-10): ";
        cin >> seatNo;

        if (seatNo < 1 || seatNo > 10) {
            cout << "Invalid Seat Number!\n";
        }
        else if (seats[seatNo - 1] == 1) {
            cout << "Seat Already Booked!\n";
        }
        else {
            seats[seatNo - 1] = 1;
            cout << "Ticket Booked Successfully!\n";
        }
    }

    void cancelTicket() {
        int seatNo;
        cout << "Enter Seat Number to Cancel: ";
        cin >> seatNo;

        if (seatNo < 1 || seatNo > 10) {
            cout << "Invalid Seat Number!\n";
        }
        else if (seats[seatNo - 1] == 0) {
            cout << "Seat is Already Available!\n";
        }
        else {
            seats[seatNo - 1] = 0;
            cout << "Ticket Cancelled Successfully!\n";
        }
    }
};

int main() {
    TicketBooking ticket;
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====";
        cout << "\n1. Show Available Seats";
        cout << "\n2. Book Ticket";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                ticket.showSeats();
                break;

            case 2:
                ticket.bookTicket();
                break;

            case 3:
                ticket.cancelTicket();
                break;

            case 4:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}