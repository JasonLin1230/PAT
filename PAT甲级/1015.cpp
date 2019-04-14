#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int x) {
	if (x <= 3) {
		return x > 1;
	}
	else {
		/*int sqr = (int)sqrt(x);
		for (int i = 0; i < sqr; ++i) {
			if (x & i == 0) {
				return false;
			}
		}*/

		//优化
		// 不在6的倍数两侧的一定不是质数
		if (x % 6 != 1 && x % 6 != 5) {
			return false;
		}
		int sqr = (int)sqrt(x);
		for (int i = 5; i <= sqr; i += 6) {
			if (x % i == 0 || x % (i + 2) == 0) {
				return false;
			}
		}
		return true;
	}
}
int main() {
	int n, d;
	while (cin >> n >> d) {
		if (n < 1) {
			break;
		}
		else {
			if (isPrime(n)) {
				//反转
				int arr[100], index = 0;
				while (n != 0) {
					arr[index++] = n % d;
					n = n / d;
				}
				for (int j = 0; j < index; ++j) {
					n = n * d + arr[j];
				}
				if (isPrime(n)) {
					cout << "Yes" << endl;
				}
				else {
					cout << "No" << endl;
				}

			}
			else {
				cout << "No" << endl;
			}
		}
	}
	return 0;
}