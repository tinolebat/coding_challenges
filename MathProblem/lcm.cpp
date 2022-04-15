#include <iostream>

using namespace std;

unsigned int findlcm(unsigned int a, unsigned int b)
{
    // Store Max of the 2 numbers
    unsigned int max = (a > b)? a : b ;
    while(1)
    {
        if( max%a == 0 && max%b ==0)
        {
            return max;
        } else {
            ++max;
        }
    }
}

unsigned int gcd2(unsigned int a, unsigned int b)
{
    unsigned int result=0;
    return b == 0 ? a : gcd2(b, a%b);
}

unsigned int lcmThroughGcd(unsigned int a, unsigned int b)
{
    unsigned int h = gcd2(a, b);
    return h ? (a * (b / h)) : 0;
}

int lcm_multiple()
{

}


int main()
{
    unsigned lcm=0, n1, n2;

    std::cout << "Enter 2 numbers: \n" ;
    std::cin >> n1;
    std::cin >> n2;

    lcm = findlcm(n1, n2);
    std::cout << "LCM = " << lcm << std::endl;    

    return 0;
}