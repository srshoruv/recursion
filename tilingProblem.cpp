#include <iostream>
using namespace std;

int tiling(int n) {
    if (n==0 || n == 1) {
        return 1;
    }
    return tiling(n-1) + tiling(n-2);
    

}

int main(){
    cout << tiling(3);
}