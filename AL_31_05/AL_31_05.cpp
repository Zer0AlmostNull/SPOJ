#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a, b;
		scanf_s("%d/%d", &a, &b);

		// print int
		printf("%d", a / b);

		int r = a % b;
		
		// if there is a fraction
		if (r != 0)
		{
			vector<int> rests;

			int index = 0;
			while (true)
			{
				r *= 10;
				rests.push_back(r / b);

				r %= b;


			}


		}

	}

}