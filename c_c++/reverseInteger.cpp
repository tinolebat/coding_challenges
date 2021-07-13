#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    int reverseInteger(int x){
        int result=0;
        int digit=0;
        while(x!=0){
            digit = x % 10;
            x/=10;
            if((result > INT32_MAX/10) || result ==INT32_MAX/10 && digit >7 ) return 0;
            if((result < INT32_MIN/10) || result == INT32_MIN/10 && digit < -8) return 0;
            result = result * 10 + digit;
        }
    return result;
    }
};

int main(){

    Solution sol;
    int res;
    res = sol.reverseInteger(18952033);
    cout << res << "\n";

    return 0;
}