#include<iostream>
#include<vector>

using namespace std;

const int MIN = numeric_limits<int>::min();
// A[]�� ���ӵ� �κ� ������ �ִ� ���� ���Ѵ�. �ð� ���⵵: O(N^3)
int inefficientMaxSum(const vector<int>& A) {
	int N = A.size(), ret = MIN;
	for (int i = 0; i < N; ++i)
		for (int j = i; j < N; ++j) {
			// ���� A[i..j]�� ���� ���Ѵ�.
			int sum = 0;
			for (int k = i; k <= j; ++k)
				sum += A[k];
			ret = max(ret, sum);
		}
	return ret;
}
// A[]�� ���ӵ� �κ� ������ �ִ� ���� ���Ѵ�. �ð� ���⵵: O(N^2)
int betterMaxSum(const vector<int>& A) {
	int N = A.size(), ret = MIN;
	for (int i = 0; i < N; ++i) {
		int sum = 0;
		for (int j = i; j < N; ++j) {
			// ���� A[i..j]�� ���� ���Ѵ�.
			int sum = 0;
			sum += A[j];
			ret = max(ret, sum);
		}
	}
	return ret;
}