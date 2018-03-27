#include <iostream>
using namespace std;
int main() {
	int l1, l2;
	float z[1001] = { 0 };
	float z2[1001] = { 0 };
	int count = 0;
	int tmp_z = 0;
	cin >> l1;
	for (int i = 0; i < l1; i++) {
		cin >> tmp_z;
		cin >> z[tmp_z];
		count++;
	}
	cin >> l2;
	for (int i = 0; i < l2; i++) {
		cin >> tmp_z;
		if (z[tmp_z] == 0) {
			count++;
		}
		cin >> z2[tmp_z];
		z[tmp_z] += z2[tmp_z];
	}
	cout << count;
	for (int j = 1000; j >= 0; j--) {
		if (z[j] != 0) {
			cout <<" " << j <<" "<< z[j];
		}
	}
	return 0;
}