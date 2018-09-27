#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
	int count[26] = { 0 };
	int anag = 0;
	for (int i = 0; i<a.size(); i++)
	{
		count[a[i] - 'a']++;
	}
	for (int i = 0; i<b.size(); i++)
	{
		count[b[i] - 'a']--;
	}

	for (int i = 0; i< 26; i++)
	{
		if (count[i] >0)
		{
			anag += count[i];
		}
		else if (count[i]<0)
		{
			anag -= count[i];
		}
	}

	return anag;


}

int main()
{
	string a;
	getline(cin, a);

	string b;
	getline(cin, b);

	int res = makeAnagram(a, b);

	cout << res << "\n";

	return 0;
}