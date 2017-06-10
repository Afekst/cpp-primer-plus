#include <iostream>
using namespace std;

double CelToFar(double cel);

int main(){
    cout << "Please enter a Celsius value: ";
    double cel;
    cin >> cel;
    cout << cel << " degrees Celsius is " 
         << CelToFar(cel) << " degrees Fahrenheit" << endl;
    return 0;
}

double CelToFar(double cel){
    return 1.8 * cel + 32;
}