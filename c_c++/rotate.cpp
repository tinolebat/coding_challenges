#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

using namespace std;

// void rotate(vector<int>& nums, int k) {    
//        int n = nums.size();
//        // int n = sizeof(nums) / sizeof(nums[0]);
//        // std::cout << n ;
//        k %= n;
//        int tmp;    
//        for(int i=0; i<k;i++){           
//             int last = nums[n-1];
//             for(int j=0;j<n;j++){
//                 tmp = nums[j];
//                 nums[j] = last;
//                 last = tmp;                
//          }  
//        }        
//     }

class Solution {
public:
   vector<int> rotate(vector<int>& nums, int k) {
        int n = nums.size();
       k %= n;
    //    std::cout << k ;
       for(int i=0; i<k;i++){ 
            int last = nums[n-1];
            for(int j=n-2;j>=0;j--){
                nums[j+1] = nums[j];             
                }  
            nums[0]=last;                   
        }
        return nums;
   }
};

int main(){
    Solution s;
    int k=3;
    std::vector<int> input = { 1, 2, 3, 4, 5, 6, 7 };
    std::vector<int> result;

    result = s.rotate(input, k);

    for(int i=0; i<result.size(); i++){
        std::cout << result[i];
    }
    std::cout << '\n';

    return 0;
}