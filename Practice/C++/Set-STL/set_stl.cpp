#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	set<int> s;
	set<int> ::iterator itr;
		int input;
	cin >> input;

	for (int i = 0; i< input; i++) {
		int select, input_vector;
		cin >> select;
		cin >> input_vector;
		switch (select) {
		case 1:
			s.insert(input_vector);
			break;
		case 2:
			s.erase(input_vector);
			break;
		case 3:
			cout << (s.find(input_vector) == s.end() ? "No" : "Yes") << endl;
			break;
		}
	}
	return 0;
}



