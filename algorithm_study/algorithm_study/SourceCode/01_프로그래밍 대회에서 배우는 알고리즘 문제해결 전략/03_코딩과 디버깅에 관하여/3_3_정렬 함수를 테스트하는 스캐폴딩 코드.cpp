#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

// 우리가 테스트하고 싶은 정렬 함수
void mySort(std::vector<int>& array);
// 주어진 배열을 문자열로 바꾼다.
string toString(const vector<int>& array);
int main() {
	// 무한히 반복한다.
	while (true) {
		// 임의의 입력을 만든다.
		int n = rand() % 100 + 1;
		std::vector<int> input(n);
		for (int i = 0; i < n; ++i)
			input[i] = rand();
		// 두 개의 복제를 만들어서 하나는 우리의 정렬 함수로, 하나는 표준 라이브러리로 정렬한다.
		std::vector<int> mySorted = input;
		mySort(mySorted);
		std::vector<int> reference = input;
		// 만약 다르면 오류를 내고 종료한다.
		if (mySorted != reference) {
			std::cout << "Mismatch!" << std::endl;
			cout << "Input: " << toString(input) << endl;
			cout << "Expected: " << toString(reference) << endl;
			cout << "Got: " << toString(mySorted) << endl;
			break;
		}
	}
}
