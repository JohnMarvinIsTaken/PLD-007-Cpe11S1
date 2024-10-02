#include <iostream>

using namespace std;

int main ()
{

int x=0;
int y=0;

cout<<"Input your first Positive Integer: ";
cin>>x;

cout<<"Input your second Positive Interger: ";
cin>>y;

int sum = x + y;
int average = x % y;
int sumofsquaretotal = x*x+y*y;


cout<<"The sum is:"<<sum<<endl;
cout<<"The average is:"<<average<<endl;
cout<<"The total sum of the square for both numbers are:"<<sumofsquaretotal<<endl;


return 0;
}
