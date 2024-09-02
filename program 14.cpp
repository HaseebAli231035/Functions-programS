#include <iostream>
using namespace std;
int g;
void show(void);
    int main()
{
        cout<< "Enter a number:" << endl;
        cin>> g;
        cout<<"Value of g before function call:" << g << endl;
        show();
        cout<<"Value of g after function call:" << g << endl;
        cout<< "My name is Haseeb Ali" << endl;
        cout<< "Roll number : 231035" << endl;
    return 0;
}
void show(void)
{
    g = g * 2;
     
}


