#include <iostream>
using namespace std;

int main(){
    const double kmInMiles = 1.6093;
    const double litersInGallons = 3.7854;
    double ltr100km;
    cout << "Please enter fuel efficiency in L/100km: ";
    cin >> ltr100km;

    double kml = 100 / ltr100km;
    double mpg = (kml * litersInGallons) / kmInMiles;
    cout << "Fuel efficiency in MPG is: " << mpg << endl;

    return 0;
}