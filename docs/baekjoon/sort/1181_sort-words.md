# 단어 정렬 (1181번)

### 문제

알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

1. 길이가 짧은 것부터
2. 길이가 같으면 사전 순으로

<br/>

### 입력

첫째 줄에 단어의 개수 N이 주어진다. (1≤N≤20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.

<br/>

### 출력

조건에 따라 정렬하여 단어들을 출력한다. 단, 같은 단어가 여러 번 입력된 경우에는 한 번씩만 출력한다.

<br/>

### 예제 입력 1

```
13
but
i
wont
hesitate
no
more
no
more
it
cannot
wait
im
yours
```

<br/>

### 예제 출력 1

```
i
im
it
no
but
more
wait
wont
yours
cannot
hesitate
```

<br/>

### Source code

```c++
#include <iostream>
#include <algorithm>

using namespace std;

string a[20000];
int n;

bool compare(string a, string b) {
	// 길이가 짧은 순서 우선
	if (a.length() < b.length() )  {
		return 1;
	} else if (a.length() > b.length() ) {
		return 0;
	}
	// 길이가 짧은 경우라면
	else {
		return a < b; // 사전 순으로 정렬 
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
		if(i>0 && a[i] == a[i-1]) {
			continue;
		} else {
			cout << a[i] << '\n';
		}
	}
	return 0;
} 

```

<br/>

### Tip

* C++ STL 라이브러리 sort 함수를 이용하면 쉽게 정렬할 수 있는 문제이다.

<br/>

[목록 보기](../../../README.md)