#include<iostream>
#include<vector>

using namespace std;

// �ڿ��� n�� ���μ� ���� ����� ���� ���� �迭�� ��ȯ�Ѵ�.
vector<int> factor(int n) {
	if (n == 1) return vector<int>(1, 1); // n = 1�� ���� ���ܷ� �Ѵ�.
	vector<int> ret;
	for (int div = 2; n > 1; ++div)
		while (n % div == 0) {
			n /= div;
			ret.push_back(div);
		}
	return ret;
}