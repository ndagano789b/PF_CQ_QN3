#include <iostream>

using namespace std;
//this function help us to generate the gcd of two integers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
//and this one just reduce them by the gcd
int reduce(int num, int denom) {
    int com_divisor = gcd(num, denom);
    return num / com_divisor;
}

int main()
{
	//we are declaring our variables in the main
    int num;
    int denom;
    std::cout<<"Enter the numerator: ";
    std::cin>>num;
    std::cout<<"Enter the denominator: ";
    std::cin>>denom;//let the user enter a number of his choice
    

if(num%denom==0){ std::cout<<1;}//if the number is deductible return 1
else if(num||denom<=0 && num%denom!=0){
        std::cout<<0;//if not return 0
}
}
