#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
	vector<int> elements;

public:
	int maximumDifference;
	Difference(vector<int> elements)
	{
		this->elements = elements;
	}

	void computeDifference()
	{
		maximumDifference = 0;
		for (int i = 0; i < (int)elements.size(); i++)
		{
			int sub = 0;
			for (int j = 0; j<(int)elements.size(); j++)
			{
				if (elements[i]<elements[j])
					sub = elements[j] - elements[i];
				else
					sub = elements[i] - elements[j];

				if (sub > maximumDifference)
					maximumDifference = sub;
			}
		}
	}
};

int main()
{
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++)
	{
		int e;
		cin >> e;

		a.push_back(e);
	}

	Difference d(a);

	d.computeDifference();

	cout << d.maximumDifference;

	return 0;
}