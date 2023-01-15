#include<iostream>
#include<vector>

using namespace std;


int main() {
	//Part 1. Input
	int N;				// 정수의 개수
	cin >> N;
	vector<int> V(N);	// 전체 정수
	int v;				// 탐색 정수 value
	int ret = 0;		// 결과 값

	for (int i = 0; i < N; ++i)
		cin >> V[i];
	cin >> v;

	// Part 2. Data Processing O(N)
	for (int i = 0; i < N; ++i)
		if (V[i] == v)
			++ret;
	
	// Part 3. Result
	cout << ret;

	return 0;
}