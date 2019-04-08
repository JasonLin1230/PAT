#include<iostream>
#include<string>
using namespace std;
int main()
{
	string num;
	cin >> num;
	string trans[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int sum = 0;
	for (int i = 0; i < num.length(); i++)
	{
		sum += (num[i] -'0');
	}
	string sum_str = to_string(sum);
	cout << trans[sum_str[0] - '0'];
	for (int i = 1; i < sum_str.length(); i++)
	{
		cout << " " <<trans[sum_str[i] - '0'];
	}
	return 0;
}