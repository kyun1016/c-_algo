#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {
	//========================
	// Part 1. Input
	//========================
	int N = 5, sum = 0;
	vector<int> V(N);
	for (int i = 0; i < N; ++i) {
		cin >> V[i];
		sum += V[i];
	}
	//========================	
	// Part 2. Data Processing
	//========================
	// Step 1. Calculation Averagae O(1)
	int average, median;
	average = sum / N;

	// Step 2. Calculation Median O(n log n)
	sort(V.begin(), V.end(), compare);
	median = V[2];

	//========================
	// Part 3. Result
	//========================
	cout << average << "\n" << median;


	return 0;
}