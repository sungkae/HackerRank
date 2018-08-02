#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> split_string(string input_string)
{
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y)
	{
		return x == y and x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ')
	{
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - 1));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - 1 + 1));

	return splits;
}
void mininumBribes(vector<int> q)
{
	int count = 0;
	int tmp;
	tmp = q.back();					//access the last element
	q.pop_back();					//pop the last
	while (!q.empty())
	{
		if (tmp<q.back())
		{
			int diff =  q.back()-tmp;
			count += diff;
			if (diff > 2) {
				cout << "Too chaotic" << endl;
				return;
			}
		}
		tmp = q.back();					//access the last element
		q.pop_back();					//pop the last
	}
	cout << count << endl;
}


int main()
{
	int t;
	cin >> t;

	for (int t_itr = 0; t_itr < t; t_itr++)
	{
		int n;
		cin >> n;
		vector<int> q(n);
		for (int i = 0; i < n; i++)
		{
			int q_item;
			cin >> q_item;
			q[i] = q_item;
		}

		mininumBribes(q);
	}
	system("pause");
	return 0;
}

