#include<iostream>
using namespace std;
#include<conio.h>
void cal(int a,int b,char op);
int main()
{
	cout<<"Haseeb Ali"<<endl;
	int x,y;
	char c;
	cout<<"Enter first number"<<endl;
	cout<<"Enter operator"<<endl;
	cout<<"Enter second number"<<endl;
	cin>>x>>c>>y;
	cal(x,y,c);
	getch();	
}
void cal(int a, int b, char op)
{
	switch(op)
	{
		case'+':
		cout<<a<<"+"<<b<<"="<<a+b;
		break;
		case'-':
		cout<<a<<"-"<<b<<"="<<a-b;
		break;
		case'*':
		cout<<a<<"*"<<b<<"="<<a*b;
		break;
		case'/':
		cout<<a<<"/"<<b<<"="<<a/b;
		break;
		case'%':
		cout<<a<<"%"<<b<<"="<<a%b;
		break;
		default:
		cout<<"invalid operator!";
	}
}
