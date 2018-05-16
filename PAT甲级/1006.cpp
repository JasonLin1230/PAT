#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main() 
{
	int min = INT_MAX, max = INT_MIN;
	int count, h_in, m_in, s_in, h_out, m_out, s_out;
	string locked, unlocked, tmp_id;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> tmp_id;
		scanf_s("%d:%d:%d %d:%d:%d", &h_in, &m_in, &s_in, &h_out, &m_out, &s_out);
		int tmp_in = h_in * 3600 + m_in * 60 + s_in;
		if (tmp_in < min)
		{
			min = tmp_in;
			unlocked = tmp_id;
		}
		int tmp_out = h_out * 3600 + m_out * 60 + s_out;
		if (tmp_out > max)
		{
			max = tmp_out;
			locked = tmp_id;
		}
	}
	cout << unlocked << " " << locked << endl;
	return 0;
}