#include <iostream>
#include <algorithm>

using namespace std;

string a[20000];
int n;

int getSum(string a) {
	 int i, length = a.length(), sum = 0;
	 for (i=0; i<length; i++) {
	 	// ������ ��쿡�� ���Ѵ�.
		 if(a[i] - '0' <= 9 && a[i] - '0' >= 0) {
		 	sum += a[i] - '0';
		 }
	 }
	 return sum;
}

bool compare(string a, string b) {
	int aSum, bSum;
	// ���̰� ª�� ���� �켱
	if (a.length() < b.length() )  {
		return 1;
	} else if (a.length() > b.length() ) {
		return 0;
	}
	// ���̰� ���� �����
	else {
		aSum = getSum(a); 
		bSum = getSum(b);
		// ���ڿ� ���Ե� ������ ���� �ٸ��ٸ�
		if (aSum != bSum) {
			return aSum < bSum;
		} else {
			return a < b;
		}
	} 
}

int main (void) {
	int i;
	cin >> n;
	for (i=0; i<n; i++) {
		cin >> a[i];
	}
	sort(a, a+n, compare);
	for (i=0; i<n; i++) {
			cout << a[i] << '\n';

	}
	return 0;
} 

