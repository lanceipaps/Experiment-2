#include <iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cout << "Enter a number" <<endl;
	cin >> n;
	for (int i = 1; i <= n ; ++i){
		sum += i ;
	}
	cout << "The sum of 1 to " << n << " is " << sum;
	return 0;
}
