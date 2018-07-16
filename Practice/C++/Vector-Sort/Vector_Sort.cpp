#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int input;
	cin >> input;

	vector<int> sorted_num;
	for (int i = 0; i < input; i++) {
		int x;
		cin >> x;
		sorted_num.push_back(x);
	}

	sort(sorted_num.begin(), sorted_num.end(),greater<int>());
	
	while(!sorted_num.empty()) {
		cout << sorted_num[sorted_num.size()-1] << " ";
		sorted_num.pop_back();
	}

	system("pause");
	return 0;
}