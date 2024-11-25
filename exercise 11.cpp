#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int* ptr = (int*)malloc(sizeof(int)); //dynamically allocates memory
	if (ptr != nullptr){
		*ptr = 10;
		cout<<"Value: "<<*ptr<<endl;
		free(ptr);
	}
}
