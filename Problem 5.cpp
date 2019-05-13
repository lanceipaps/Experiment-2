#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n,num1=1,num2=2,num;
	cout << " The next 20 Fibonacci numbers after 0 and 1 " << endl;
	
	for (int x=0; x<20; x++)
	{
		cout<<num1<< ", " ;
		num = num1 + num2;
		num1 = num2;
		num2 = num;
	}
return 0;
}
