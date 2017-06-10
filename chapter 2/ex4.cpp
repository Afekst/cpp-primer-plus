#include <iostream>
using namespace std;

int YearToMonth(int year);

int main(){
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Your age in months is " << YearToMonth(age) << endl;;
}

int YearToMonth(int year){
    return year * 12;
}