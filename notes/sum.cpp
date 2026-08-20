
#include <iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;

	int sum = 0;

	for(int i = 0; i < n; i++) {
		sum += i;
	}
	cout << sum;
}
