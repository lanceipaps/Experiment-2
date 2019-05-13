#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
		float bill, remaining, gallons, latecharge;
		cout << " Enter total water consumption in gallon/s: " << endl;
		cin >> gallons;
		bill = (gallons*1.10) + 35;
		cout << " Enter unpaid balance: " << endl;
		cin >> remaining;
		
		latecharge = remaining + 20;
		if (remaining>0)
		{
		
			cout<< " Your unpaid balance to pay: " << latecharge << endl;
			cout<< " Your total water bill with remaining balance: " << bill + latecharge<< endl;
		}
		
			else if(remaining==0)
			
			cout << " Total water bill: " << bill << endl;
			
			else
			cout<< "invalid" << endl;
			
			return 0;
			
}
	
