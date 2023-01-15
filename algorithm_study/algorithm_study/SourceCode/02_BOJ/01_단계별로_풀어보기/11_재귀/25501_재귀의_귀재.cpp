#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

pair<int,int> recursion(const string& s, int l, int r) {
	if (l >= r) return make_pair(1,l+1);
	else if (s[l] != s[r]) return make_pair(0, l+1);
	else return recursion(s, l + 1, r - 1);
}

pair<int, int> isPalindrome(const string& s) {
	return recursion(s, 0, s.size() - 1);
}


int main() {
	//========================
	// Part 1. Input
	//========================
	int N;					// N = 테스트 케이스 개수
	cin >> N;
	vector<string> V(N);	// V = 문자열 배열
	for (int i = 0; i < N; ++i)
		cin >> V[i];
	
	//========================	
	// Part 2. Data Processing & Result
	//========================
	// Recursive Call, O(N)
	pair<int, int> ret;
	for (int i = 0; i < N; ++i) {
		ret = isPalindrome(V[i]);
		cout << ret.first << " " << ret.second << "\n";
	}

	return 0;
}