#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int temp[] = { 10, -10, 5, -5, 1, -1 };
	int start, end, cnt = 0, index;
	cin >> start >> end;

	while (start != end)
	{
		cnt++;
		int mini = 100000000000;
		for (int i = 0; i < 6; i++)
		{
			int t = start + temp[i] - end;
			t = t < 0 ? -t : t;
			if (mini > t)
			{
				mini = t;
				index = i;
			}
		}
		start += temp[index];
	}

	cout << cnt;
	return 0;
}