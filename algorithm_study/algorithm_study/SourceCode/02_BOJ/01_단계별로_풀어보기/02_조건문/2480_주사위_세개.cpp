#include<iostream>

int max(const int& a, const int& b) {
	if (a >= b)
		return a;
	else
		return b;
	return 0;
}

int main() {
	int N[3] = { 0 };
	for (int i = 0; i < 3; ++i)
		std::cin >> N[i];

	if ((N[0] == N[1]) && (N[0] == N[2]) && (N[1] == N[2]))
		std::cout << 10000 + N[0] * 1000;
	else if (N[0] == N[1])
		std::cout << 1000 + N[0] * 100;
	else if (N[1] == N[2])
		std::cout << 1000 + N[1] * 100;
	else if (N[0] == N[2])
		std::cout << 1000 + N[0] * 100;
	else
		std::cout << max(max(N[0], N[1]), N[2]) * 100;
	return 0;
}