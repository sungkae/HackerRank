#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
const int MAX_SIZE = 200;
using namespace std;

vector<string> split_string(string);
void countSort(vector<int> *arr);
int activityNotifications(vector<int>expenditure, int d) {
	double median;
	int result = 0;
	for (int k = 0; k < (int)expenditure.size()- d; k++) {
		vector<int> parts;
		//복사본 만들기 d 크기 만큼
		for (int j = 0; j < d; j++) {
			parts.push_back(expenditure[j+k]);
		}

		int count[MAX_SIZE] = {0};
		//count
		for (int i = 0; i < parts.size(); i++) {
			count[parts[i]]++;
		}
		//count sum
		for (int i = 1; i < MAX_SIZE; i++) {
			count[i] += count[i - 1];
		}
		int *places = new int[parts.size()];

		for (int i = 0; i < parts.size(); i++) {
			places[i] = 0;
		}
		
		
		// array new sorted

		for (int itr = 1; itr < MAX_SIZE; itr++) {
 			if (count[itr] > count[itr-1] && places[count[itr]-1] ==0) {
				places[count[itr] - 1] = itr;
				count[itr]--;
				itr--;
			}
		}

		//메디안 구하기
		if (d % 2 == 0) {
			median = ((double)(places[d / 2] + places[d / 2 + 1])) / 2;
		}
		else {
			median = places[d / 2];
		}

		if (median * 2 >= expenditure[k + d] ) {
			result++;
		}
		delete[] places;

	}

	return result;
}

int main() {
	string nd_temp;
	getline(cin, nd_temp);

	vector<string> nd = split_string(nd_temp);

	int n = stoi(nd[0]);

	int d = stoi(nd[1]);

	string expenditure_temp_temp;
	getline(cin, expenditure_temp_temp);

	vector<string> expenditure_temp = split_string(expenditure_temp_temp);

	vector <int> expenditure(n);

	for (int i = 0; i < n; i++) {
		int expenditure_item = stoi(expenditure_temp[i]);

		expenditure[i] = expenditure_item;
	}

	int result = activityNotifications(expenditure, d);

	cout << result << endl;
	system("pause");
	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y and x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}

void countSort(vector<int> *arr) {
	


}