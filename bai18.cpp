#include <iostream>

using namespace std;

int main()
{
	long long n, k;
	cin >> n;
	cin >> k;
	long long bauday = n / k;
	long long du = n % k;
	cout << banday << " " << du << endl;
	
	return 0;
}