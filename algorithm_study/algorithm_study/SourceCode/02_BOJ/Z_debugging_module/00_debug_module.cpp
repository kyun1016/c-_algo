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
	// 무한히 반복한다.
	while (true) {
		// 임의의 입력을 만든다.
		int n = 3;
		std::vector<int> input(n);
		for (int i = 0; i < n; ++i) {
			input[i] = rand() % 6 + 1;
			cout << input[i] << " ";
		}
		cout << endl;
		// 두 개의 복제를 만들어서 하나는 우리의 정렬 함수로, 하나는 표준 라이브러리로 정렬한다.
		target(input);
	}
}