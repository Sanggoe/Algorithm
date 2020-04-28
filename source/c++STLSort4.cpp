#include <iostream>
#include <vector> // c++ ������ ��� ���� ����. 
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a, pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) { // ������ ���ٸ�
		return a.second.second > b.second.second; // ��������� ����(�) �л� ���� 
	} else {
		return a.second.first > b.second.first;
	} 
}

int main(void) {
	vector<pair<string, pair<int, int> > > v; // �տ������� first, second ������ ������.
	v.push_back(pair<string, pair<int, int> >("ȫ�浿", pair<int, int>(90, 19961213)));
	v.push_back(pair<string, pair<int, int> >("�����", pair<int, int>(97, 19970509)));
	v.push_back(pair<string, pair<int, int> >("��浿", pair<int, int>(90, 19940723)));
	v.push_back(pair<string, pair<int, int> >("ȫ����", pair<int, int>(97, 19950329)));
	v.push_back(pair<string, pair<int, int> >("�ڰ���", pair<int, int>(95, 19900602)));
	
	sort(v.begin(), v.end(), compare);
	
	for (int i=0; i<v.size(); i++) {
		cout << v[i].first << ' ';
	}
	
	return 0; 
}
