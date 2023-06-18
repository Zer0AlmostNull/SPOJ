#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n = 0;
	cin >> n; 
	for (; n > 0; n--)
	{
		int a, b;  //inicjuje 2 zmienne staloprzecinkowe
		cin >> a >> b; //wczytuje wartoœci

		if (b == 0)
		{
			cout << "1" << endl;
			continue;
		}
		else if (b % 4 == 0)
		{
			cout << (int)(pow(a % 10, 4)) % 10 << endl;
			continue;
		}

		cout << (int)(pow(a % 10, (b % 4)))%10 << endl; 
	}
}

