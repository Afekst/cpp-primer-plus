#include <iostream>
using namespace std;

int main(){
    static int secsInMin = 60;
    static int secsInHr = secsInMin * 60;
    static int secsInDay = secsInHr * 24;

    long secs;
    cout << "Enter the number of seconds: ";
    cin >> secs;
    long remeSec = secs;
    int days = secs / secsInDay;
    secs %= secsInDay;
    int hrs = secs / secsInHr;
    secs %= secsInHr;
    int mins = secs / secsInMin;
    secs %= secsInMin;

    cout << remeSec << " seconds = " << days << " days, " 
         << hrs << " hours, " << mins << " minutes, " << secs << " seconds" << endl;
    
    return 0;
}