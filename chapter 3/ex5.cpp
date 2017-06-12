#include <iostream>
using namespace std;

int main(){
    long long worldPop;
    long long usPop;
    cout << "Enter the world's population: ";
    cin >> worldPop;
    cout << "Enter the population of the US: ";
    cin >> usPop;

    double percent = ((double)usPop / worldPop) * 100;
    cout << "The population of the US is " << percent 
         << "% of the world population" << endl;

    return 0;
}