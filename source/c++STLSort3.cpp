#include <iostream>
#include <vector> // c++ ������ ��� ���� ����. 
#include <algorithm>

using namespace std;

int main(void) {
	vector<pair<int, string> > v; // �տ������� first, second ������ ������.
	v.push_back(pair<int, string>(90, "����� "));
	v.push_back(pair<int, string>(85, "����� "));
	v.push_back(pair<int, string>(82, "����� "));
	v.push_back(pair<int, string>(98, "�ϵ��� "));
	v.push_back(pair<int, string>(79, "������ "));
	
	sort(v.begin(), v.end());
	
	for (int i=0; i<v.size(); i++) {
		cout << v[i].second << ' ';
	}
	
	return 0; 
}
