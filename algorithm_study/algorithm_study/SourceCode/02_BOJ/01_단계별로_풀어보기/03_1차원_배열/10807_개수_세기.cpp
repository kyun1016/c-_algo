#include<iostream>
#include<vector>

using namespace std;


int main() {
	//Part 1. Input
	int N;				// ������ ����
	cin >> N;
	vector<int> V(N);	// ��ü ����
	int v;				// Ž�� ���� value
	int ret = 0;		// ��� ��

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