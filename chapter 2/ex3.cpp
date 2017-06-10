#include <iostream>
using namespace std;

void MiceFunc();
void RunFunc();

int main(){
    MiceFunc();
    MiceFunc();
    RunFunc();
    RunFunc();
    return 0;
}

void MiceFunc(){
    cout << "Three blind mice" << endl;
}

void RunFunc(){
    cout << "See how they run" << endl;
}