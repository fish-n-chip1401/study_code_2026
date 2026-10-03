#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a = n / 1000;
    long long b = n % 1000;
    cout << a * 1000 + b;

    return 0;
}