#include<iostream>
using namespace std;

int main()
{
	int res = 0;
	for (int i = 2000; i <= 2000000; i++)
	{
		for (int j = 1; j <= 12; j++)
		{
			int x = 0;
			if ((i % 4 == 0&&i%100==0)||i%400==0)
			{
				if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)x = 31;
				else if (j == 4 || j == 6 || j == 9 || j == 11)x = 30;
				else x = 29;
			}
			else
			{
				if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)x = 31;
				else if (j == 4 || j == 6 || j == 9 || j == 11)x = 30;
				else x = 28;
			}
			for (int k = 1; k <= x; k++)
			{
				if (i % j == 0 && i % k == 0)
				{
					res++;
				}
			}
		}
	}
	cout << res;
	return 0;
}