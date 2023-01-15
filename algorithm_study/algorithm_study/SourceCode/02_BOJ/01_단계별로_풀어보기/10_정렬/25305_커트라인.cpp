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
	int N, k;			// N = ������ ��, k = ������ ��
	cin >> N >> k;
	vector<int> V(N);	// V =  ���� �迭
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