#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if(a==100||a==10||a==001){
        cout << 1 <<endl;
    }else if(a==111){
        cout << 3 <<endl;
    }else if(a==000){
        cout << 0 <<endl;
    }else{
        cout << 2 <<endl;
    }
    return 0;
}