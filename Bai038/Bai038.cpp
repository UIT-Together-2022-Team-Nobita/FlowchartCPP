#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    int i = 1;
    while (i <= n)
    {
        s = s + i * i * i * i;
        i = i + 1;
    }
    cout << s;
    return 0;
}