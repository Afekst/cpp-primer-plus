#include <iostream>
using namespace std;

int FurlongsToYards(int fl);

int main(){
    cout << "Enter distance in furlongs: ";
    int furlong;
    cin >> furlong;
    cout << furlong <<" furlong(s) are " 
         << FurlongsToYards(furlong) << " in yards" << endl;
}

int FurlongsToYards(int fl){
    return fl * 220;
}