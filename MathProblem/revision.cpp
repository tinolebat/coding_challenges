#include <iostream>

using namespace std;

void sumofdivisiblesby3and5(unsigned int limit)
{
    unsigned long long sum = 0;

    for(unsigned int i =3; i<limit; ++i)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            sum += i;
        }
    }
    std::cout << "Sum of all divisible by 3 & 5 up to " << limit << " = " << sum << std::endl;
}

void gcd(unsigned int a, unsigned int b)
{
    if(b > a){
        unsigned int tmp = b;
        b = a;
        a =tmp;
    }

    while(b !=0)
    {
        unsigned int r = a % b ;
        a = b;
        b = r;
    }
    std::cout << "GCD = " << a << std::endl;

}

unsigned int gcd2(unsigned int a, unsigned int b)
{
    unsigned int result=0;
    
    return b == 0 ? a : gcd2(b, a%b);
}

void lcm(unsigned int a, unsigned int b)
{

    unsigned int max = (a > b) ? a: b;

    while(1)
    {
        if(max%a == 0 && max%b ==0)
        {
            std::cout << "LCM = " << max << std::endl;
            break;
        } else{
            ++max;
        }
    }

}

unsigned int lcmThroughGcd(unsigned int a, unsigned int b)
{
    unsigned int h = gcd2(a, b);
    return h ? (a * (b / h)) : 0;
}

int main()
{
    // unsigned int limit =0;
    // std::cout << "Enter Limit to find all divisible by 3 & 5:\n";
    // std::cin >> limit;
    // sumofdivisiblesby3and5(limit);

    // unsigned int n, m;
    // std::cout << "Enter numbers to find their GCD:\n";
    // std::cin >> n;
    // std::cin >> m;
    // gcd(n,m);
    // unsigned int result = gcd2(n,m);
    // std::cout << "GCD 2 = " << result << std::endl;

    unsigned int n, m;
    std::cout << "Enter numbers to find their GCD:\n";
    std::cin >> n;
    std::cin >> m;
    lcm(n,m);


    return 0;
}