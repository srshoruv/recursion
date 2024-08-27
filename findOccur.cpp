#include <iostream>
#include <vector>
#include <string>
using namespace std;

void findOccur(vector<int> nums, int i, int key) {
    if(i==nums.size()) {
        return;
    }
    if (nums[i]==key){
        cout << i <<" ";
        findOccur(nums, i+1,key);
    } else{
        findOccur(nums, i+1,key);
    }
    
}

int main(){
    vector<int> nums = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key = 2;
    findOccur(nums, 0,key);
}