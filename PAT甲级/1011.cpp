#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double maxProfit = 1.0;
	char bet[3] = { 'W','T','L' };
	for (int i = 0; i < 3; ++i)
	{
		double line_max = 0;
		int index = 0;
		for (int j = 0; j < 3; ++j)
		{
			double temp;
			cin >> temp;
			if (temp >= line_max)
			{
				line_max = temp;
				index = j;
			}
		}
		maxProfit *= line_max;
		cout << bet[index] << " ";
	}
	cout << setprecision(4) << (maxProfit*0.65 - 1) * 2;
	return 0;
}