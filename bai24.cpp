#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int temp = a;
	a = b;
	b = c;
	c = temp;
	cout << a << " " << b << " " << c;
	
	return 0;
}