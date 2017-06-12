#include <iostream>
using namespace std;

int main(){
    static int minsInDeg = 60;
    static int secsInDeg = 3600;

    double deg, min, sec;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;

    double totalDeg = deg + min / minsInDeg + sec / secsInDeg;
    cout << deg << " degrees, " << min << " minutes, " << sec 
         << " seconds = " << totalDeg << " degrees" << endl;
    return 0;
}