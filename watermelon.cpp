#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int satu = 0, dua = 0;
    int result = 0;
    for (int i = 0; i < a.length(); i++)
    {
        char temp1 = a[i], temp2 = b[i];
        if (temp1 >= 'a' && temp1 <= 'z')
            temp1 -= 32;
        if (temp2 >= 'a' && temp2 <= 'z')
            temp2 -= 32;
        if (temp1 != temp2)
        {
            result = (temp1 < temp2) ? -1 : 1;
            break;
        }
        satu += temp1, dua += temp2;
    }
    cout << result;
    return 0;
}