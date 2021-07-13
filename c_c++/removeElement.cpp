#include <stdio.h>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Solution{
    public:
    int removeElement(vector<int>& nums, int val){
        int i =0;
        for(int j=0; j<nums.size();j++){
            if(nums[j] != val){
                nums[i]=nums[j];
                i++;
            }
        }

        for(int k =0; k<nums.size();k++){
            cout << nums[k];
        }
        return i;
    }
};

int main(){
    Solution s;
    vector<int> nums{3,2,2,3};
    vector<int> nums2{0,1,2,2,3,0,4,2};
    int result;
    result = s.removeElement(nums, 3);
    printf("\n%d\n", result);

    return 0;
}