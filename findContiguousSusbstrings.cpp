#include <iostream>
#include <string>
using namespace std;

void findCont(string s, int i){
    string ans = "";
    if (i==s.size()){
        cout << ans;
        return;
    }
    ans[i] = s[i] + s[i+1];
    findCont(s,i+1);
}

int main(){
    string s = "abcab";
    findCont(s,0);
}