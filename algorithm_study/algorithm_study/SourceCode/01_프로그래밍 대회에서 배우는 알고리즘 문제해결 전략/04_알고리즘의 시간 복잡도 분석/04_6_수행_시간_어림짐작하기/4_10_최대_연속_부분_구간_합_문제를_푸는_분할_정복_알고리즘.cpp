#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int MIN = numeric_limits<int>::min();
// A[]�� ���ӵ� �κ� ������ �ִ� ���� ���Ѵ�. �ð� ���⵵: O(nlgn)
int fastMaxSum(const vector<int>& A, int lo, int hi) {
	// ���� ���: ������ ���̰� 1�� ���
	if (lo == hi) return A[lo];
	// �迭�� A[lo..mid], A[mid+1..hi]�� �� �������� ������.
	int mid = (lo + hi) / 2;
	// �� �κп� ��� ���� �ִ� �ִ� �� ������ ã�´�. �� ������
	// A[i..mid][�� A[mid+1..j] ���¸� ���� ������ ������ �̷������.
	// A[i..mid] ���¸� ���� �ִ� ������ ã�´�.
	int left = MIN, right = MIN, sum = 0;
	for (int i = mid; i >= lo; --i) {
		sum += A[i];
		left = max(left, sum);
	}
	// A[mid+1..j] ���¸� ���� �ִ� ������ ã�´�.
	sum = 0;
	for (int j = mid + 1; j <= hi; ++j) {
		sum += A[j];
		right = max(right, sum);
	}
	// �ִ� ������ �� ���� �� �ϳ����� ���� �ִ� ����� ���� ��� ȣ��� ã�´�.
	int single = max(fastMaxSum(A, lo, mid), fastMaxSum(A, mid + 1, hi));
	// �� ��� �� �ִ�ġ�� ��ȯ�Ѵ�.
	return max(left + right, single);
}
