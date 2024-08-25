#include <iostream>
using namespace std;

int sumOf(int n) {
    if (n==1) {
        return 1;
    }
    return n + sumOf(n-1);
}

int main(){
    cout << sumOf(7);
}