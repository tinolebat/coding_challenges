#include <iostream>
#include "add.h"
#include "div.h"
#include "print_val.h"

using namespace std;

int main(){

float f1, f2, result_add, result_div;

std::cout<<"Enter f1\t";
std::cin>>f1;
std::cout<<"Enter f2\t";
std::cin>>f2;

result_add = add(f1,f2);
result_div = div(f1,f2);

print_val("Addition ", result_add);
print_val("Division ", result_div);

}