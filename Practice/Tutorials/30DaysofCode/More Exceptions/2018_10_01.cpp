#include <iostream>
#include <exception>

using namespace std;

class Calculator {
public:
	char const* what()
	{

	}
	int power(int n, int p)
	{
		if (n < 0 || p < 0)
		{
			throw runtime_error("n and p should be non-negative\n");
		}
		else
		{
			while (p--)
			{
				n *= n;
			}
		}
		return n;
	}
};
int main()
{
	Calculator myCalculator = Calculator();
	int T, n, p;
	cin >> T;
	while (T-- > 0)
	{
		if (scanf("%d %d", &n, &p) == 2)
		{
			try {
				int ans = myCalculator.power(n, p);
				cout << ans << endl;
			}
			catch (exception& e)
			{
				cout << e.what() << endl;
			}
		}
	}
}