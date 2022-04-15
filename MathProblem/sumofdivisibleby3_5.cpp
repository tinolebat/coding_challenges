#include <iostream>

using namespace std;

int main(){
    unsigned int limit=0;
    unsigned long long sum =0;
    std::cout << "Enter a limit: "<< std::endl;
    std::cin >> limit;

    for(unsigned int i =3; i < limit; ++i){ // We start at 3 because 1 and 2 are not divisible by 3
        if(i%3==0 || i%5 == 0)
        {
            sum +=1;
        }
    }

    std::cout << "Sum of all divisible by 3 or 5 = " << sum << std::endl;

}