#include <iostream>
#include <cmath>

using namespace std;

float tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = tong(n);
	cout << "S(" << n << ")= " << kq;
	return 0;
}
float tong(int k)
{
	float s = 0;
	int i = 1;
	while (i <= k)
	{
		s = sqrt(2 + s);
		i = i + 1;
	}
	return s;
}