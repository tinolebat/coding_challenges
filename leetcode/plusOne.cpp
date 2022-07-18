#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

/*
    You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. 
    The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
    Increment the large integer by one and return the resulting array of digits.
    
    Example 2:
    Input: digits = [4,3,2,1]
    Output: [4,3,2,2]
*/

using namespace std;

class Solution
{
    public:
        void display(vector<int> v)
        {
            for(int i=0; i<v.size(); i++)
            {
                cout << v[i] <<" ";
            }
            cout << "\n";
        }
        
        vector<int> plusOne(vector<int>& digits) {
            for(int i = digits.size()-1; i >=0; i--)
            {
                if(digits[i]<9)
                {
                    digits[i]++;
                    return digits;
                } else {
                    digits[i] = 0;
                }
            }
            digits.push_back(0);
            digits[0] = 1;
            return digits;
        }
};

int main()
{
    vector<int> digits{1, 2, 3};
    vector<int> digits2{9};
    vector<int> digits3{9,9,9,9,9};
    vector<int> result;

    Solution S;
    result = S.plusOne(digits3);
    S.display(result);


    return 0;
}