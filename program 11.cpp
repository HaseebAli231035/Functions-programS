#include <iostream>
using namespace std;
int mul(int a, int b);
    int main()
 {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    if (mul(num1, num2))   
{
            cout << num2 << " is a multiple of " << num1 << "." << endl;
}   else
 {
            cout << num2 << " is not a multiple of " << num1 << "." << endl;
}
        cout<< "My name is Haseeb Ali" << endl;
        cout<< "Roll number : 231035 " << endl;
    return 0;
}
int mul(int a, int b) 
{
    if (a == 0)
 {
        return 0;
 }
    return (b % a == 0);
}
