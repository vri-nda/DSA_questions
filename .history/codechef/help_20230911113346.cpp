#include <iostream>
#include <sstream>
using namespace std;

void ticketBooking(char* loginTime, int othCustomers, int serverDelay) {
    // Parse the login time
    istringstream iss(loginTime);
    int loginHour, loginMinute;
    char separator;
    iss >> loginHour >> separator >> loginMinute;

    // Calculate the fixed transaction time per customer
    int fixedTransactionTime = 60 / (othCustomers + 1); // +1 to include the current customer

    // Calculate the total transaction time including server delay
    int totalTransactionTime = fixedTransactionTime + serverDelay;

    // Calculate the booked hour and minute
    int bookedHour = loginHour + (loginMinute + totalTransactionTime) / 60;
    int bookedMinute = (loginMinute + totalTransactionTime) % 60;

    // Adjust the booked time if it's not within the range
    if (bookedHour >= 24) {
        bookedHour -= 24;
    }

    // Print the transaction status and booked time
    cout << "Success, ";
    if (bookedHour < 10) {
        cout << "0";
    }
    cout << bookedHour << ".";
    if (bookedMinute < 10) {
        cout << "0";
    }
    cout << bookedMinute << endl;
}

int main() {
    char loginTime[6]; // Assuming loginTime is a string in hh.mm format
    int othCustomers, serverDelay;

    // Read input
    cin.getline(loginTime, 6);
    cin >> othCustomers >> serverDelay;

    // Call the ticketBooking function
    ticketBooking(loginTime, othCustomers, serverDelay);

    return 0;
}
