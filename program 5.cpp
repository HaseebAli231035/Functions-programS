#include<iostream>
using namespace std;
#include<conio.h>
void factorial(int n);
int main()
{
	cout<<"Haseeb Ali"<<endl;
	int num;
	cout<<"Enter number:";
	cin>>num;
	factorial(num);
	getch();
}
void factorial(int n)
{
	int i;
	long fact;
	fact=1;
	for(i=1;i<=n;i++)
	fact*=i;
	cout<<"Factorial of "<<n<<"is:"<<fact;
}
