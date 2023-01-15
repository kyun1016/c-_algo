#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

// �츮�� �׽�Ʈ�ϰ� ���� ���� �Լ�
void mySort(std::vector<int>& array);
// �־��� �迭�� ���ڿ��� �ٲ۴�.
string toString(const vector<int>& array);
int main() {
	// ������ �ݺ��Ѵ�.
	while (true) {
		// ������ �Է��� �����.
		int n = rand() % 100 + 1;
		std::vector<int> input(n);
		for (int i = 0; i < n; ++i)
			input[i] = rand();
		// �� ���� ������ ���� �ϳ��� �츮�� ���� �Լ���, �ϳ��� ǥ�� ���̺귯���� �����Ѵ�.
		std::vector<int> mySorted = input;
		mySort(mySorted);
		std::vector<int> reference = input;
		// ���� �ٸ��� ������ ���� �����Ѵ�.
		if (mySorted != reference) {
			std::cout << "Mismatch!" << std::endl;
			cout << "Input: " << toString(input) << endl;
			cout << "Expected: " << toString(reference) << endl;
			cout << "Got: " << toString(mySorted) << endl;
			break;
		}
	}
}
