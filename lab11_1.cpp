// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout<<"Press Enter 3 times to reveal your future.";
    for(int i = 0; i < 3; i++){
        cin.get();
    }
    srand(time(0));
    cout<<"You will get "<< grade[rand()%9]<<" in this 261102.";
}