#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	string s;
	string even_string = "", odd_string = "";
	int query;
	cin >> query;
	for (int j = 0; j < query; j++) {
		cin >> s;

		for (int i = 0; i < s.length(); i++) {
			if (i % 2 == 0)
				even_string += s[i];
			if (i % 2 != 0)
				odd_string += s[i];
		}

		cout << even_string << " " << odd_string << endl;
		even_string = "";
		odd_string = "";
	}

	return 0;
}