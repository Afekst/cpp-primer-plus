#include <iostream>
using namespace std;

int main(){
    static int inches = 12;
    int heightInches;
    cout << "Please enter your height in inches: __\b\b";
    cin >> heightInches;
    int heightFeet = heightInches / inches;
    int heightRemain = heightInches % inches;
    cout << "Your height in feet: " << heightFeet << "'" << heightRemain << "\"" << endl;
    return 0;
}