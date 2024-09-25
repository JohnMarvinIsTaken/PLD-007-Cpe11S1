#include <iostream>

using namespace std;

int main ()
{
	char a;
	
	
	cout<<"are you a boy or a girl?"<<endl;
	cout<<"type b if boy, and g if girl";
	cin>>a;
	
	switch (a)
	{
		case 'b':
			cout<<"you are a male";
		break;
		
		case 'g':
			cout<<"you are a female";
		break;
		
		default:
			{
			cout<<"you are not human";
			}
		break;
	}
	return 0;
}
