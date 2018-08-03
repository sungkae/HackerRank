#include <iostream>
#include <vector>
#include <fstream>
#include <string>	
using namespace std;

vector<string> split_string(string);

vector<int> rotLeft(vector<int> a, int d)
{
	for (int i = 0; i < d; i++)
	{
		int tmp = a.front();				//access the first element and save temperatory
		a.erase(a.begin());					//erase the first element
		a.push_back(tmp);					//push back the first element;
	}

	return a;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	string nd_temp;
	getline(cin, nd_temp);

	vector<string> nd = split_string(nd_temp);

	int n = stoi(nd[0]);

	int d = stoi(nd[1]);

	string a_temp_temp;
	getline(cin, a_temp_temp);

	vector<string > a_temp = split_string(a_temp_temp);

	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		int a_item = stoi(a_temp[i]);

		a[i] = a_item;
	}

	vector<int> result = rotLeft(a, d);

	for (int i = 0; i < result.size(); i++)
	{
		fout << result[i];

		if (i != result.size() - 1)
		{
			fout << " ";
		}
	}

	fout << "\n";

	fout.close();
	return 0;
}