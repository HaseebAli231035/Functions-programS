#include <iostream>
using namespace std;
int sqr(int num);
int cube(int num);
    int main()
{
    int x, y, z;
        cout<<"Enter an integer:" << endl;
        cin>>x;
        cout<<"Enter an integer:" << endl;
        cin>>y;
         z = sqr(x) + cube(y);
            cout<< "Result=" << z << endl;
        cout<< "Haseeb Ali" << endl;
        return 0;
}

int sqr(int num)
{
    return num * num;
}
int cube(int num)
{
    return num * num* num;
}
