#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
int i;
int main(){
    cout << "Press Enter 3 times to reveal your future.";
    while(i <= 2){
    cin.get();
    i++;
    }
    srand(time(0));
    int x = rand()%9;
    cout << "You will get " << grade[x] << " in this 261102.";
    return 0;
}