#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k) {
	deque<int> myque;
	for (int i = 0; i < n; i++) {
		//base case for first element
		if (myque.empty()) {
			myque.push_back(i);
		}

		//remove elements outside the current window
		if (myque.front() <= (i - k)) {
			myque.pop_front();
		}

		//move max element to the front
		while (!myque.empty() && arr[i] >= arr[myque.back()]) {
			myque.pop_back();
		}

		myque.push_back(i);

		//print out only when the first window is completed
		if (i >= (k - 1)) {
			cout << arr[myque.front()] << " ";
		}
	}
	cout << endl;
	
}

int main() {
	int t;
	cin >> t;
	while (t > 0) {
		int n, k;
		cin >> n >> k;
		int i;
		int arr[n];
		for (i = 0; i < n; i++)
			cin >> arr[i];
		printKMax(arr, n, k);
		t--;
	}
	return 0;
}