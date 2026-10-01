#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tong = (n / 100) + ((n % 100) / 10) + ((n % 100) % 10);
	cout << tong\n;
	
	return 0;
}