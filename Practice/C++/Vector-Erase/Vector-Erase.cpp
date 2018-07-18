#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector<int> vect;
	int         input;
	cin >> input;

	for (int i = 0; i < input; i++) {
		int inputVector;
		cin >> inputVector;
		vect.push_back(inputVector);
	}

	int         eraseone;

	cin >> eraseone;

	vect.erase(vect.begin() + eraseone - 1);

	int         eraseBegin, eraseEnd;

	cin >> eraseBegin >> eraseEnd;

	vect.erase(vect.begin() + eraseBegin - 1, vect.begin() + eraseEnd - 1);

	cout << vect.size() << "\n";
	for (int i = 0; i < vect.size(); i++) {
		cout << vect[i] << " ";
	}
	cout << endl;

	return 0;
}
