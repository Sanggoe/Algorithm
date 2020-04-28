#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) { // 작은 값이 앞으로 즉, 오름차순 
	return a < b;
}

int main(void) {
	int a[10] = {9,3,5,4,1,10,8,6,7,2};
	int i;
	sort(a, a+10, compare); // 배열의 메모리주소, 마지막 주소
	for (i=0; i<10; i++) {
		printf("%d ", a[i]);
	} 
}
