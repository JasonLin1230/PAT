#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	int startIndex = 0, endIndex = n - 1, curSum = 0, maxSum = -1, curLeft = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		curSum += arr[i];
		if (curSum < 0)
		{
			curSum = 0;
			curLeft = i + 1;
		}
		else if(curSum > maxSum)
		{
			maxSum = curSum;
			startIndex = curLeft;
			endIndex = i;
		}

	}
	if (maxSum < 0)
	{
		maxSum = 0;
	}
	cout<<maxSum<<" "<<arr[startIndex]<<" "<<arr[endIndex];
	return 0;
}