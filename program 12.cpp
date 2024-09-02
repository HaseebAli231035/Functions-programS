#include <iostream>
using namespace std; 

double area(int b, int h)
{
    double a;
    a = 0.5*b*h;
    return a;
}
    int main()
{
    double base, height, ar;
        cout<<"Enter the Base:" << endl;
        cin>>base;
        
        cout<<"Enter the Height:" << endl;
        cin>>height;
     ar = area(base, height);
        cout<<"Area of triangle is:" << ar << endl;
        cout<< "\n My name is Haseeb Ali." << endl;
        cout<< "Roll number : 231035. " << endl;
    return 0;

}
