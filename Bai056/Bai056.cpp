#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int i = 2;
    int count = 0;
    while (i <= n)
    {
        if (n % i == 0)
            count++;
        i = i + 2;
    }
    cout << s;
    return 0;
}