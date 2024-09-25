#include <iostream>

using namespace std;

int main(){
	//create a c++ program that applies MDAS Calculator
	int a;
	int b;
	char c;
	cout<<"Input your first number: ";
	cin>>a;
	cout<<"Input your Second number: ";
	cin>>b;
	cout<<"Input your Operator: ";
	cin>>c;
	
	int sum;
	int minus;
	int quotient;
	int product;
	
	switch(c)
	{
		case '+':
			sum = a+b;
			cout<<sum;
		break;
		
		case '-':
			minus = a-b;
			cout<<minus;
		break;
		
		case '/':
			quotient = a/b;
			cout<<quotient;
		break;
		
		case '*':
			product = a*b;
			cout<<product;
		break;
		
		default:
		{
			cout<<"input a standard MDAS operator";
		break;
		}
	}
	return 0;
}
