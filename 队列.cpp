#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0, k = 5;
	while (s + k < n)
	{
		s += k;
		k *= 2;
	}
	n -= s;

	int len = k / 5;
	int t = (n + len - 1) / len;
	cout << (char)(t - 1 + 'a');
	return 0;
}