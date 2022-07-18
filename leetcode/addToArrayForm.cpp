#include <iostream>
#include <vector>

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

        vector<int> AddToArrayForm(vector<int>& num, int k)
        {
            // Tip: follow the schoolbook addition from the end to the beginning
            for (int i=num.size()-1; i >=0; --i)
            {

                num[i] = num[i] + k;
                k = num[i]/10;
                num[i] = num[i]%10;
            }

            while(k>0)
            {
                num.insert(num.begin(), k%10);
                k/=10;
            }

            return num;
        }
};

int main()
{
    vector<int> digits{1, 2, 3};
    vector<int> digits2{9};
    vector<int> digits3{9,9,9,9,9};

    vector<int> res;
    Solution S;
    res = S.AddToArrayForm(digits3, 15);
    S.display(res);

    return 0;
}