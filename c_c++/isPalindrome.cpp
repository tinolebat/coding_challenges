#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


class Solution{
    public:
    void isPalindrome(int x){
        int t =x;
        int digit=0;

        unsigned int result = 0;
        if(t>0){
            while(t!=0){
            digit = t%10;
            t/=10;
            result = result * 10 + digit;
            }
        }   
        
        if (result == x){
            printf("Palindrome\n");
        }else{
            printf("Not a Palindrome\n");
        }
    }
};

int main(){
    Solution a;
    a.isPalindrome(121);

    return 0;
}