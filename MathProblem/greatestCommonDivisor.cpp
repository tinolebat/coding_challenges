#include <iostream>

using namespace std;

unsigned int gcd_recursive(unsigned int const a, unsigned int const b)
{
    // variable = (condition) ? expressionTrue : expressionFalse;
    return b == 0 ? a : gcd_recursive(b, a % b);
}

unsigned int gcd(unsigned int a, unsigned int b)
{
    while(b !=0 )
    {
        unsigned int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

unsigned int gcd2(unsigned int a, unsigned int b)
{
    unsigned int gcd =0;
    
    if(a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    for(unsigned int i = 1; i<=a; ++i)
    {
        if(a % i==0 && b % i == 0 )
        {
            gcd= i;
        }
    }
    return gcd;
}

int main ()
{
    unsigned int n1, n2, gcd_Recursive;
    unsigned gcd_v1, gcd_v2;
    std::cout << "Enter 2 positives integers: \n";
    std::cin >> n1;
    std::cin >> n2;

    
    gcd_Recursive = gcd_recursive(n1, n2);
    cout << "GCD v.Recursive : " << gcd_Recursive << std::endl;

    gcd_v1 = gcd(n1, n2);
    cout << "GCD : " << gcd_v1 << std::endl;

    gcd_v2= gcd2(n1, n2);
    cout << "GCD v2 : " << gcd_v2 << std::endl;

    return 0;
}