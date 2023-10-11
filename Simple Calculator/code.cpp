#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char oper;
	int a, b;
	cout << " Enter the Operator + - * / ";
	cin >> oper;
	cout << " Enter the 1st Number ";
	cin >> a;
	cout << " Enter the 2nd Number ";
	cin >> b;

	switch (oper)
	{ 
	   case '+':
		   cout << a << " + " << b <<" = " << a + b;
		   break;
	   case '-':
		   cout << a << " - " << b << " = " << a - b;
		   break;
	   case '*':
		   cout << a << " * " << b << " = " << a * b;
		   break;
	   case '/':
		   if (b != 0)
		   {
			   cout << a << " / " << b << " = " << a / b;
		   }
		   else
		   {
			   cout << " Division is not possible ";
		   }
		   break;
	  
	   default:
	
		   cout << "Error! operator is not correct";
		   break;
	}
	return 0;
}