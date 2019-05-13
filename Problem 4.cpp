#include <iostream>
using namespace std;

int main ()
{
	int counter ;
	
	cout << "Let's start counting... \n" ;
	for (counter=1;counter<=30;counter++)
	{
		if (counter ==11) continue;
		if (counter ==13) continue;
		if (counter ==15) continue;
		if (counter ==17) continue;
		if (counter ==19) continue;
		if (counter ==21) continue;
		if (counter ==23) continue;
		if (counter ==25) continue;
		if (counter ==27) continue;
		if (counter ==29) continue;
		cout << counter << ",";
	}
	return 0;
}
