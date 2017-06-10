#include <iostream>
using namespace std;

void DispTime(int hr, int min);

int main(){
    cout << "Enter the number of hours: ";
    int hr;
    cin >> hr;
    cout << "Enter the number of minutes: ";
    int min;
    cin >> min;
    DispTime(hr, min);
    return 0;

}

void DispTime(int hr, int min){
    cout << "Time: " << hr << ":" << min << endl;
}