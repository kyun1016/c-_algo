#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int max(const int& a, const int& b) {
	if (a >= b)
		return a;
	else
		return b;
	return 0;
}

int target(vector<int> N) {
	if (N[0] == N[1] == N[2])
		std::cout << 10000 + N[0] * 1000 << endl;
	else if (N[0] == N[1])
		std::cout << 1000 + N[0] * 100 << endl;
	else if (N[1] == N[2])
		std::cout << 1000 + N[1] * 100 << endl;
	else if (N[0] == N[2])
		std::cout << 1000 + N[0] * 100 << endl;
	else
		std::cout << max(max(N[0], N[1]), N[2]) * 100 << endl;
	return 0;
}

int main() {
	// ������ �ݺ��Ѵ�.
	while (true) {
		// ������ �Է��� �����.
		int n = 3;
		std::vector<int> input(n);
		for (int i = 0; i < n; ++i) {
			input[i] = rand() % 6 + 1;
			cout << input[i] << " ";
		}
		cout << endl;
		// �� ���� ������ ���� �ϳ��� �츮�� ���� �Լ���, �ϳ��� ǥ�� ���̺귯���� �����Ѵ�.
		target(input);
	}
}