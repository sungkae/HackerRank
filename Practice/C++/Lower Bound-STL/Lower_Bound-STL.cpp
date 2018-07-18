#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	//Define input for size of vector
	int		input;
	vector<int> vect;
	//Get input
	cin >> input;

	//Loop for input size to push vector inputs
	for (int i = 0; i < input; i++) {
		int vectInput;
		cin >> vectInput;
		vect.push_back(vectInput);
	}
	//sorting vector
	sort(vect.begin(), vect.end());
	//Define input for query
	int		query;
	cin >> query;
	for (int i = 0; i < query; i++) {
		int n;
		cin >> n;
		vector<int>::iterator low;
		low = lower_bound(vect.begin(), vect.end(), n);
		//low == vector's index included boundary
		if (vect[low-vect.begin()] == n)
			cout << "Yes " << low - vect.begin()+1 << endl;
		else
			cout << "No " <<low - vect.begin()+1 << endl;
	}
	return 0;
}