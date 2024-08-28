#include<iostream>
using namespace std;
#include<conio.h>
void table(int n);
int main()
{
	cout<<"Haseeb Ali"<<endl;
	int num;
	cout<<"Enter a number;";
	cin>>num;
	table(num);
	getch();
}
void table(int n)
{
	int c;
	for(c=1;c<=10;c++)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
	}
}
