#include <iostream>
#include <string>
using namespace std;

void bString (int n, string ans, int lastNum) {
    if (n==0) {
        cout << ans << endl;
        return;
    }
    if (lastNum != 1){
        bString(n-1,ans+'0', 0);
        bString(n-1, ans+'1', 1);
    } else {
        bString(n-1, ans+'0', 1);
    }
}

int main(){
    string ans = "";
    bString(5,ans,0);
}