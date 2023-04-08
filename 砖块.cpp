#include<iostream>
using namespace std;
const int N = 210;
char s[N], c[N];
int  a[N], b[N];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        for (int i = 1; i <= m; i++)
        {
            cin >> s[i];
            c[i] = s[i];
        }
        int j = 0;
        int flag = 0;
        for (int i = 1; i < m; i++)//假设全部为白色
        {
            if (s[i] == 'B')
            {
                s[i] = 'W';
                if (s[i + 1] == 'B')
                {
                    s[i + 1] = 'W';
                }
                else
                {
                    s[i + 1] = 'B';
                }
                a[++j] = i;
            }
        }
        if (s[1] == s[m])
        {
            flag = 1;
        }

        int j1 = 0;
        int goal = 0;
        for (int i = 1; i < m; i++)//假设全部为黑色
        {
            if (c[i] == 'W')
            {
                c[i] = 'B';
                if (c[i + 1] == 'B')
                {
                    c[i + 1] = 'W';
                }
                else
                {
                    c[i + 1] = 'B';
                }
                b[++j1] = i;
            }
        }
        if (c[1] == c[m])
        {
            goal = 1;
        }


        if (flag == 1)
        {
            cout << j << endl;
            for (int i = 1; i <= j; i++)
            {

                cout << a[i] << " ";
            }
            cout << endl;
        }
        if (goal == 1 && flag == 0)
        {
            cout << j1 << endl;
            for (int i = 1; i <= j1; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
        if (goal == 0 && flag == 0)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}