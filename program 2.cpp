#include<iostream>
using namespace std;
#include<conio.h>
void max(int a,int b);
int main()
{
	cout<<"Haseeb Ali"<<endl;
	int x,y;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	max(x,y);
	getch();	
}
void max(int a,int b)
{
	if(a>b)
	cout<<"maximum number is"<<a;
	else
	cout<<"maximum number is"<<b;
}