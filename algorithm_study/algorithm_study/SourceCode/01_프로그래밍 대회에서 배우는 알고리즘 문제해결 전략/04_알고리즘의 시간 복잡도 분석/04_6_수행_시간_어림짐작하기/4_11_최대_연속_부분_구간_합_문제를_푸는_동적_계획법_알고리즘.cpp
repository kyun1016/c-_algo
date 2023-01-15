#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MIN = numeric_limits<int>::min();
// A[]�� ���ӵ� �κ� ������ �ִ� ���� ���Ѵ�. �ð� ���⵵: O(n)
int fastestMaxSum(const vector<int>& A) {
	int N = A.size(), ret = MIN, psum = 0;
	for (int i = 0; i < N; ++i) {
		psum = max(psum, 0) + A[i];
		ret = max(psum, ret);
	}
	return ret;
}
