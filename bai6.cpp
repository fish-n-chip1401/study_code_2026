#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int chuc = n / 10;
	int donvi = n % 10;
	cout << chuc << " " << donvi << endl;
	
	return 0;
}