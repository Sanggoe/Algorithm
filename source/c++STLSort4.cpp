#include <iostream>
#include <vector> // c++ 에서는 요걸 자주 쓴다. 
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a, pair<string, pair<int, int> > b) {
	if(a.second.first == b.second.first) { // 성적이 같다면
		return a.second.second > b.second.second; // 생년월일이 느린(어린) 학생 먼저 
	} else {
		return a.second.first > b.second.first;
	} 
}

int main(void) {
	vector<pair<string, pair<int, int> > > v; // 앞에서부터 first, second 정보를 가진다.
	v.push_back(pair<string, pair<int, int> >("홍길동", pair<int, int>(90, 19961213)));
	v.push_back(pair<string, pair<int, int> >("상고이", pair<int, int>(97, 19970509)));
	v.push_back(pair<string, pair<int, int> >("김길동", pair<int, int>(90, 19940723)));
	v.push_back(pair<string, pair<int, int> >("홍고이", pair<int, int>(97, 19950329)));
	v.push_back(pair<string, pair<int, int> >("박고이", pair<int, int>(95, 19900602)));
	
	sort(v.begin(), v.end(), compare);
	
	for (int i=0; i<v.size(); i++) {
		cout << v[i].first << ' ';
	}
	
	return 0; 
}
