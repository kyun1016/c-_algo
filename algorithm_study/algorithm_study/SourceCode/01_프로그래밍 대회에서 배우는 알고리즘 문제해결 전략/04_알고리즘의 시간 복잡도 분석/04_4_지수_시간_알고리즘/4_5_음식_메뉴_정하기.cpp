#include<iostream>
#include<vector>

using namespace std;

const int INF = 987654321;
// �� �޴��� ��ΰ� �Ļ��� �� �ִ��� ���θ� ��ȯ�Ѵ�.
bool canEverybodyEat(const vector<int>& menu);
// �丮�� �� �ִ� ������ ���� ��
int M;
// food ��° ������ ������ ���θ� �����Ѵ�.
int selectMenu(vector<int>& menu, int food) {
	// ���� ���: ��� ���Ŀ� ���� ������ ���θ� �������� ��
	if (food == M) {
		if (canEverybodyEat(menu)) return menu.size();
		// �ƹ��͵� �� �Դ� ����� ������ ���� ū ���� ��ȯ�Ѵ�.
		return INF;
	}
	// �� ������ ������ �ʴ� ������� ���� ����Ѵ�.
	int ret = selectMenu(menu, food + 1);
	// �� ������ ����� ����� ���� ����ؼ� �� ���� ���� ���Ѵ�.
	menu.push_back(food);
	ret = min(ret, selectMenu(menu, food + 1));
	menu.pop_back();
	return ret;
}