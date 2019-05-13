#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char pack;
	int hour,bill;
	
	cout << " DIFFERENT INTERNET SUBSCRIPTION PACKAGES " << endl;
	cout << " Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr. " << endl;
	cout << " Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr. " << endl;
	cout << " Package C: For P1995/mo of unlimited access is provided. " << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;
	
	cout << " Which package would you like to avail? " << endl;
	cout << " Package: " ;
	cin >> pack ;
	
	cout << " Enter number of hours " << endl;
	cout << " Hours: " ;
	cin >> hour ;
	
	switch (pack)
	{
		case 'A':
		case 'a':
		if (hour<=10)
		bill=995;
		
		else if (hour>10)
		bill=(hour - 10)* 20 + 995;
		
		break; 
		
		case 'B':
		case 'b':
		if (hour<=20)
		bill=1495;
		
		else if (hour>20)
		bill=(hour-20)* 10 + 1495;
		
		break;
		
		case 'C':
		case 'c':
		
		bill=1995;
		
		break;
		
	}
	
	cout << " Your monthly bill is= " << bill <<  " Php" << endl;
	

return 0;

}


