#include <iostream>
#include <algorithm>

using namespace std;

string a[20000];
int n;

int getSum(string a) {
	 int i, length = a.length(), sum = 0;
	 for (i=0; i<length; i++) {
	 	// 숫자인 경우에만 더한다.
		 if(a[i] - '0' <= 9 && a[i] - '0' >= 0) {
		 	sum += a[i] - '0';
		 }
	 }
	 return sum;
}

bool compare(string a, string b) {
	int aSum, bSum;
	// 길이가 짧은 순서 우선
	if (a.length() < b.length() )  {
		return 1;
	} else if (a.length() > b.length() ) {
		return 0;
	}
	// 길이가 같은 경우라면
	else {
		aSum = getSum(a); 
		bSum = getSum(b);
		// 글자에 포함된 숫자의 합이 다르다면
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

