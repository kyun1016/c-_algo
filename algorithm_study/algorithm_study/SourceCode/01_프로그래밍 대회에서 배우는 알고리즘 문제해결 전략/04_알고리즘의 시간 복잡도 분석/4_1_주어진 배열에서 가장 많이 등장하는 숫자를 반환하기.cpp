#include<iostream>
#include<vector>

using namespace std;


//�־��� �迭 A���� ���� ���� �����ϴ� ���ڸ� ��ȯ�Ѵ�.
//���� �� ���� �̻� ���� ��� �ƹ����̳� ��ȯ�Ѵ�.
int majority1(const vector<int>& A) {
	int N = A.size();
	int majority = -1, majorityCount = 0;
	for (int i = 0; i < N; ++i) {
		// A�� �����ϴ� A[i]�� ���� ����.
		int V = A[i], count = 0;
		for (int j = 0; j < N; ++j)
			if (A[j] == V)
				++count;
		// ���ݱ��� �� �ִ� �󵵺��� ���� �����ߴٸ� ���� �����Ѵ�.
		if (count > majorityCount) {
			majorityCount = count;
			majority = V;
		}
	}
	return majority;
}