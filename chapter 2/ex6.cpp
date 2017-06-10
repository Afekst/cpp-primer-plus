#include <iostream>
using namespace std;

double lyToau(double ly);

int main(){
    cout << "Enter the number of light years: ";
    double ly;
    cin >> ly;
    cout << ly <<" light years = " 
         << lyToau(ly) << " astronomical units" << endl;
    return 0;
}

double lyToau(double ly){
    return ly * 63240;
}