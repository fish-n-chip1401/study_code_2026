#include <iostream>

using namespace std;

int main()
{
	long long x;
	cin >> x;
	long long met = x / 100;
	long long cm = x % 100;
	cout << met << " " << cm << endl;
	
	return 0;
}