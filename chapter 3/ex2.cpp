#include <iostream>
using namespace std;

int main(){
    static int inchesInFeet = 12;
    static double metersInInch = 0.0254;
    static double poundsInKilogram = 2.2;

    int feet, inches, pounds;
    cout << "My height is:" << endl; 
    cout << "feet  :__\b\b";
    cin >> feet;
    cout << "inches:__\b\b";
    cin >> inches;
    cout << "My weight in lbs:___\b\b\b";
    cin >> pounds;

    int heightInInches = feet * inchesInFeet + inches;
    double heightInMeters = heightInInches * metersInInch;   
    double weightInKilograms = pounds / poundsInKilogram;
    double BMI =  weightInKilograms / (heightInMeters * heightInMeters);

    cout << "My BMI is: " << BMI << endl;
    return 0;
}