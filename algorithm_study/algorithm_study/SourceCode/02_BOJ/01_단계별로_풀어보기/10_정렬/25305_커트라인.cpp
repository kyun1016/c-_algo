#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}

int main() {
	//========================
	// Part 1. Input
	//========================
	int N, k;			// N = 응시자 수, k = 수상자 수
	cin >> N >> k;
	vector<int> V(N);	// V =  점수 배열
	for (int i = 0; i < N; ++i) {
		cin >> V[i];
	}
	//========================	
	// Part 2. Data Processing
	//========================
	// Sort Vecter V, O(n log n)
	sort(V.begin(), V.end(), compare);

	//========================
	// Part 3. Result
	//========================
	cout << V[k - 1] << "\n";


	return 0;
}