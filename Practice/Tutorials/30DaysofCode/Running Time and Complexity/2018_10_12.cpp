#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int query;
	cin >> query;
	bool isPrime = true;
	while (query--)
	{
		int num;
		cin >> num;
		if (num == 1)
		{
			isPrime = false;
		}
		else if (num == 2)
		{
			isPrime = true;
		}
		else {
			int root = sqrt(num);
			for (int i = 2; i <= root + 1; i++)
			{				
				if (num%i == 0)
				{
					isPrime = false;
					break;
				}
			}
		}

		if (isPrime)
			cout << "Prime" << endl;
		else
			cout << "Not prime" << endl;
		isPrime = true;
	}
	system("pause");
	return 0;
}