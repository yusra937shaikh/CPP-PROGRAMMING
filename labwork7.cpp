#include <iostream>
using namespace std;
class DistanceCalculator
{
    public:
    float calculateDistance(float u, float t, float a)
    {
        return u * t + 0.5 * a * t * t;
    }
};

int main() {
    float u, t, a; 
    DistanceCalculator dc;

    cout << "Enter initial velocity (u): ";
    cin >> u;

    cout << "Enter time taken (t): ";
    cin >> t;

    cout << "Enter acceleration (a): ";
    cin >> a;

    float distance = dc.calculateDistance(u, t, a);  // Calculate the distance using the function from the class

    
    cout << "The distance traveled by the object is: " << distance << " Meters." << endl;// Output the result

    return 0;
}
