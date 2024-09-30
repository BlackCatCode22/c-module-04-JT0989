// jT  2024-09-30
// ctimePractice


#include <iomanip>
#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;





int main()
{
  cout<<"\n Welcome to time and date practice \n"<<endl;

    // Get the current time.
    time_t currentTime = time(0);

        // Convert to my local system time.
    tm* localTime = localtime(&currentTime);

    // Create a string to hold the arrival date
    cout << " My system time is: " << (currentTime) << "\n" << endl;

    // Print the date in the format YYYY-MM-DD
    cout << (1900 + localTime->tm_year) << "-"
                << setw(2) << setfill('0') << (localTime->tm_mon + 1) << "-"
                << setw(2) << setfill('0') << localTime->tm_mday << endl;

    ostringstream dateStream2;
    dateStream2 << (1900 + localTime->tm_year) << "-"
                << setw(2) << setfill('0') << (localTime->tm_mon + 1) << "-"
                << setw(2) << setfill('0') << localTime->tm_mday << endl;

string arrivalDate = dateStream2.str();

    cout << "\nthe arrivalDate is: " << arrivalDate << "\n";

auto currentTime02 = system_clock::now();
    time_t timeNow = system_clock::to_time_t(currentTime02);

    tm localtime = *std::localtime(&timeNow);

    ostringstream dateStream;
    dateStream << put_time(&localtime, "%H:%M:%S");

    string arrivalDateChrono = dateStream.str();

    cout << "Arrival Date using chrono: " << arrivalDateChrono << endl;

















    return 0;
}
