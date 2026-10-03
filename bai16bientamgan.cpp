#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	cin >> a;
	cin >> b;
	long long temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;
	
	return 0;
}