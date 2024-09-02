#include <iostream>
using namespace std; 
float circlearea(float r)
{
    float a;
    a = 3.14 * r * r;
    return a;
}
    int main()
{
    float radius, area;
        cout<< "Enter the Radius:" << endl;
        cin>> radius;
    radius = circlearea(radius);

        cout<<"The area of the circle =" << radius << endl;

        
        cout<< "My name is Haseeb Ali" << endl;
        cout<< "Roll number : 231035 " << endl;
    return 0;
}
