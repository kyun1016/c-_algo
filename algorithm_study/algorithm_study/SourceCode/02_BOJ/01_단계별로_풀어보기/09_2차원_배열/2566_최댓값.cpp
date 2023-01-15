#include<iostream>
#include<vector>

using namespace std;

int main() {
	// Part 1. Input & Data Processing O(1)
	vector<vector<int>> V(9, vector<int>(9));
	int currentMaxValue=-1, col, row;
	for (int i = 0; i < 9; ++i)
		for (int j = 0; j < 9; ++j) {
			cin >> V[i][j];
			if (currentMaxValue < V[i][j]) {
				currentMaxValue = V[i][j];
				col = i+1;
				row = j+1;
			}
		}

	// Part 2. Result
	cout << currentMaxValue << "\n" << col << " " << row;


	return 0;
}