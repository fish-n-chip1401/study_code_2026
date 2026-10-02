#include <iostream>

using namespace std;

int main()
{
	long long N;
	cin >> N;
	long long soto = N / 1000000;
	long long du = N % 100000;
	cout << soto << " " << du << endl;
	
	return 0;
}