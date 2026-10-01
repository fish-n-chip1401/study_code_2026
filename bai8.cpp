#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tram = n / 100;
	int chuc = (n % 100) / 10;
	int donvi = (n % 100) % 10;
	cout << tram << " " << chuc << " " << donvi << endl;
	
	return 0;
}
