#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void ticketBooking(string loginTime, int othCustomers, int serverDelay) {
  // Convert the login time to a time_t object
  time_t loginTimeT = (time_t)strptime(loginTime.c_str(), "%d %H.%M", NULL);

  // Calculate the transaction completion time
  time_t transactionCompletionTime = loginTimeT + serverDelay + othCustomers * 1;

  // Get the current time
  time_t currentTime = time(NULL);

  // Check if the transaction can be completed successfully
  if (transactionCompletionTime <= currentTime) {
    string transactionCompletionTimeStr = std::string(asctime(localtime(&transactionCompletionTime)));

    cout << "Success, " << transactionCompletionTimeStr.substr(11, 5) << endl;
  } else {
    string currentTimeStr = std::string(asctime(localtime(&currentTime)));

    cout << "Failure, " << currentTimeStr.substr(11, 5) << endl;
  }
}

int main() {
  // Get the login time, number of other customers and server delay
  string loginTime;
  int othCustomers, serverDelay;
  cin >> loginTime >> othCustomers >> serverDelay;

  // Call the ticketBooking function
  ticketBooking(loginTime, othCustomers, serverDelay);

  return 0;
}