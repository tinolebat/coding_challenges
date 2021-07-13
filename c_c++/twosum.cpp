#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> twosum(vector<int>& nums, int target){
            std::vector<int> result;

            for(int i = 0; i<nums.size(); i++){
                for(int j = i+1; j<nums.size(); j++){
                    if(nums[i]+nums[j] == target){
                        result.push_back(i);
                        result.push_back(j);
                    }
                }
            }

            return result ;
    }
};

int main(){

    Solution sol;
    vector<int> nums{1,5,2,7,11,15};
    vector<int> result;
    int t = 12;
    result = sol.twosum(nums, t);
    for(int i=0; i<result.size(); i++){
        printf("%d\t", result[i]);
    }
    cout << "\n";

    return 0;
}