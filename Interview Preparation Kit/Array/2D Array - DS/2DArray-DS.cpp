#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
	int max = 0, sum = 0, height = 0, width = 0;
	for (int i = 0; i < arr.size() - 2; i++) {
		for (int j = 0; j < arr.size() - 2; j++) {
			for (int k = 0; k<3; k++) {
				sum += arr[i][j + k];
				sum += arr[i + 2][j + k];
			}
			sum += arr[i + 1][j + 1];
			if (sum > max)
				max = sum;
			sum = 0;
		}
	}

	return max;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	int result = hourglassSum(arr);

	fout << result << "\n";

	fout.close();

	return 0;
}
