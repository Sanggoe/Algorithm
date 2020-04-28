#include <iostream>
#include <vector> // c++ 에서는 요걸 자주 쓴다. 
#include <algorithm>

using namespace std;

int main(void) {
	vector<pair<int, string> > v; // 앞에서부터 first, second 정보를 가진다.
	v.push_back(pair<int, string>(90, "상고이 "));
	v.push_back(pair<int, string>(85, "삼등임 "));
	v.push_back(pair<int, string>(82, "사등임 "));
	v.push_back(pair<int, string>(98, "일등임 "));
	v.push_back(pair<int, string>(79, "오등임 "));
	
	sort(v.begin(), v.end());
	
	for (int i=0; i<v.size(); i++) {
		cout << v[i].second << ' ';
	}
	
	return 0; 
}
