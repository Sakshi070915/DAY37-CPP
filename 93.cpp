// 4. WAP to calculate factorial of the number and throw an exception if the number is less than zero 
#include<iostream>
using namespace std;
class Factorial{
    public:
    int fact(int number) {
        if (number <= 0) {
            throw "Error: Number must be positive and greater than zero.";
        }
        int result = 1;
        for (int i = 1; i <= number; ++i) {
            result *= i;
        }
        return result;
    }
};
int main() {
    int num;
    Factorial factorial;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    try {
        int result = factorial.fact(num);
        cout << "Factorial of " << num << " is " << result << std::endl;
    } catch (const char* e) {
        std::cout << e << std::endl;
    }

    return 0;
}