//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//typedef unsigned long long ull;
//
//int arr[51];
//int prime[101];
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	sort(arr, arr + N);
//	/*int ptr = 0;
//	for (int i = 0; i < N; i++) {
//		bool check = false;
//		for (int j = 0; j < ptr; j++) {
//			if (arr[i] % prime[j] == 0)
//				check = true;
//		}
//		if (!check)
//			prime[ptr++] = arr[i];
//	}*/
//
//	cout << arr[N-1] * arr[0];
//	
//	return 0;
//}