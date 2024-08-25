#include <iostream>
using namespace std;

int pow(int x, int n){
    if (n==0) {
        return 1;
    }
    int halfPower = pow(x, n/2);
    int halfSquare = halfPower * halfPower;

    if (n % 2 ==0) {
        return halfSquare;
    } else {
        return x * halfSquare;
    }
}

int main(){
    cout << pow(2,10);
}