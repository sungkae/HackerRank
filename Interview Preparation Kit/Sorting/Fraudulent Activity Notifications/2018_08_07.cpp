#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {

	map<string, int> mp;
	int query;
	int num;
	string s;
	map <string, int> ::iterator itr;
	cin >> query;

	for (int i = 0; i<query; i++) {
		cin >> s >> num;
		mp.insert(pair<string, int>(s, num));
	}

	for (int i = 0; i<query; i++) {
		cin >> s;
		if (mp[s] != NULL) {
			cout << s << "=" << mp[s] << endl;
		}
		else {
			cout << "Not found" << endl;
		}
	}
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}