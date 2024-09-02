#include <iostream>
using namespace std;
void fun(void);
    int main()
{
    
    int i;
      for( i = 1; i <= 5; ++i)
     fun();
        cout<< "My name is Haseeb Ali" << endl;
        cout<< "Roll number : 231035 " << endl;
    return 0;
}
void fun(void)
{
    static int n = 0;
        n++;  
    cout<< "Value of n = " << n << endl;   
}


