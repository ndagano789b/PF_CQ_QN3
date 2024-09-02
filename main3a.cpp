#include <iostream>

using namespace std;
int sum_from_to(int first, int last) {//this is actually our function sum from to, and i didnt use void coz void doesn't return
    return (last - first + 1) * (first + last) / 2;/*this is a mathematic formula used for arithmetic series when we know a1 and an
    so when we want to just some all numbers in that interval we will just use the formula above;*/
}

int main() {
    //i am declaring my integers in the main fx
	int first;
	int last;
//let the user enter the number of his choice
    std::cout << "Enter the first integer: ";
    std::cin >> first;

    std::cout << "Enter the last integer: ";
    std::cin >> last;
//after entering the first and last number go to sum from to fx and print all what it has in the out put below
    std::cout << "The sum is: " << sum_from_to(first, last) << std::endl;

    return 0;
}
