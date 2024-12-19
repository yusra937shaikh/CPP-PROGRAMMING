#include <iostream>
using namespace std;

class Time 
{
     public:
     int seconds;

        // Constructor to initialize seconds
        Time(int sec)
       {
            seconds = sec;
        }

        void convertTime() 
        {
            int hours = seconds / 3600;  // 1 hour = 3600 seconds
            int minutes = (seconds % 3600) / 60;  // remaining seconds divided by 60
            int sec = seconds % 60;  // remaining seconds after minutes

            cout << "Equivalent time is: " << hours << " HOURS, "<< minutes << " MINUTES, "<< sec << " SECONDS." << endl;
        }
};

int main() 
{
    int inputSeconds;
    // Ask the user to enter the number of seconds
    cout << "Enter the number of seconds: ";
    cin >> inputSeconds;

    Time time(inputSeconds);

    time.convertTime();    // Call the function to convert and display the time


    return 0;
}
