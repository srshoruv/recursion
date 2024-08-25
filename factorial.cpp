#include <iostream>
using namespace std;

int fact(int n) {
    int ans;
    if (n==0) {
        return 1;
    }
    ans = n * fact(n-1);
    return ans;
}

int main(){
    cout << fact(7);
}