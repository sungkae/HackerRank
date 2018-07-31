#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int query;
	map<string, int>m;
	cin >> query;
	
	int		number;
	string	name;
	for (int i = 0; i < query; i++) {
		int input;
		cin >> input>>name;
		switch (input) {
		case 1:
			cin >> number;
			m[name] += number;
			break;
		case 2:
			m[name] = 0;
			break;
		case 3:
			cout << m[name] << endl;
			break;
		}
	}

	return 0;
}