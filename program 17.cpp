#include <iostream>
using namespace std;
int gcd(int a, int b);
int main() 
{
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int result = gcd(num1, num2);
    cout << "The Greatest Common Divisor (GCD) of " << num1 << " and " << num2 << " is: " << result << endl;
        cout<< "My name is Haseeb Ali" << endl;
        cout<< "Roll number : 231035 " << endl;
    return 0;
}
int gcd(int a, int b)
{
    if (b == 0) 
 {
        return a;
 }
    return gcd(b, a % b);
}
