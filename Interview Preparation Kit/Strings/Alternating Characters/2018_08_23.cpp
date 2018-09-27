#include <iostream>
#include <string>
#include <vector>
#include <exception>

using namespace std;

int alternatingCharacters(string s)
{
	int count = 0;
	for (int i = 0; i < s.size()-1; i++)
	{
		if (s[i] == s[i + 1])
		{
			s.erase(s.begin() + i);
			count++;
				i--;
		}
	}

	return count;
}

int main()
{
	int q;
	cin >> q;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int i = 0; i < q; i++)
	{
		try {
			string s;
			getline(cin, s);

			int result = alternatingCharacters(s);

			cout << result << "\n";
		}
		catch (exception e)
		{
			//invalid input, ignore testcase
		}
	}

	return 0;
}