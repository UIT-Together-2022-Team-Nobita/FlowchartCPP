#include <iostream>
using namespace std;

void InputN(int&);
void XuLy(int);

int main()
{
	int n;
	InputN(n);
	XuLy(n);
	return 1206;
}

void InputN(int& n)
{
	cout << "\nNhap gia tri nguyen duong n: ";
	cin >> n;
}
void XuLy(int n)
{
	int k = 0;
	for (int s = 1; s < n; s + k + 1)
	{
		k = k + 1;
		s = s + k + 1;
	}
	cout << "\nGia tri nguyen duong k thoa [S(k) = 1 + 2 + 3 +...+ k] < n  " << k;
} 