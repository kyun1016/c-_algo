#include<iostream>
#include<vector>

using namespace std;


//�־��� �迭 A���� ���� ���� �����ϴ� ���ڸ� ��ȯ�Ѵ�.
//���� �� ���� �̻� ���� ��� �ƹ����̳� ��ȯ�Ѵ�.
int majority2(const vector<int>& A) {
	int N = A.size();
	vector<int> count(101, 0);
	for (int i = 0; i < N; ++i)
		count[A[i]]++;
	// ���ݱ��� Ȯ���� ���� �� �󵵼��� ���� ū ���� majority�� �����Ѵ�.
	int majority = 0;
	for (int i = 1; i <= 100; ++i)
		if (count[i] > count[majority])
			majority = i;
	return majority;
}