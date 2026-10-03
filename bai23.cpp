#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a = n / 100000;
	int b = (n % 100000) / 10000;
	int c = (n % 10000) / 1000;
	int d = (n % 1000) / 100;
	int e = (n % 100) / 10;
	int f = (n % 10);
	cout << f << e << d << c << b << a << endl;
	
	return 0;
}