# 수 정렬하기3 (10989번)

### 문제

N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

<br/>

### 입력

첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.

<br/>

### 출력

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

<br/>

### 예제 입력 1

```
10
5
2
3
1
4
2
3
5
1
7
```

<br/>

### 예제 출력 1

```
1
1
2
2
3
3
4
5
5
7
```

<br/>

### Source code

```c++
#include <iostream>

using namespace std;

int n;
int a[10001];

int main(void) {
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	for (int i=0; i<10001; i++) {
		while(a[i] != 0) {
			printf("%d\n", i);
			a[i]--;
		}
	}
	
}
```

<br/>

#### 시간 제한 안내

아래 적혀있지 않은 시간 제한은 [언어 도움말](https://www.acmicpc.net/help/language)에 적혀있는 기준을 따른다.

- Java: 3초
- Java (OpenJDK): 3초
- Java 11: 3초
- Kotlin (JVM): 3초

<br/>

#### 메모리 제한 안내

아래 적혀있지 않은 메모리 제한은 [언어 도움말](https://www.acmicpc.net/help/language)에 적혀있는 기준을 따른다.

- Java: 512MB
- Java (OpenJDK): 512MB
- Java 11: 512MB
- Kotlin (JVM): 512MB

<br/>

### Tip

* 문제 조건에서 주어지는 데이터는 10,000보다 작거나 같은 자연수이다.
* 범위 조건이 주어진 경우이므로, 계수 정렬을 사용하면 정말 빠르게 정렬할 수 있다.