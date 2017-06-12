#include <iostream>
using namespace std;

int main(){
    double dist, ltrs;
    cout << "Enter number of driven kilometers : ";
    cin >> dist;
    cout << "Enter amount of petrol liters used: ";
    cin >> ltrs;
    double ratio = (ltrs / dist) * 100;
    cout << "Your car gets " << ratio << " 100KM/L" <<endl;

    return 0;
}