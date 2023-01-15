#include<iostream>
#include<vector>

using namespace std;

int main() {
	// Part 1. Input
	int N, M;			// 행렬의 크기 N:row, M:column
	cin >> N >> M;
	vector<vector<int>> V(N, vector<int>(M));
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j)
			cin >> V[i][j];

	// Part 2. Data Processing O(N*M)
	int temp;
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < M; ++j) {
			cin >> temp;
			V[i][j] += temp;
		}

	//// Part 3. Result
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j)
			cout << V[i][j] << " ";
		cout << "\n";
	}
		

	return 0;
}