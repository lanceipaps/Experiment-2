#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int x,y;
	float V, z;
	z = 2.5 ;

	cout << " Enter X-Value " << endl;
	cin >> x ;
	
	cout << " Enter Y-Value " << endl;
	cin >> y ;
	
	cout << "           z = 2.5" << endl;
	
	switch(x)
	{
		case 1:
			if (x==1 && 1<y<5)
			V = x*y*z;
			
			else if (x==1 && y>=5)
			V = x + y / z;
			
			break;
			
		case 2:
			if (x==2 && y<=5)
			V = abs((x - y)/z);
			
			else if (x==2 && y>5)
			V = x - sqrt(y + z);
			
			break;
			
		default:
			V= x + y + z ;
			
			break;
	}
	
	cout<<setw(10)<<fixed<<endl;
	cout<<setprecision(2)<<fixed<<endl;
	cout << " V= " << V;
	return 0;
}
