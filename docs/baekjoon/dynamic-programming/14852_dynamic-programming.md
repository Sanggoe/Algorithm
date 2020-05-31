# 타일 채우기 3 (14852번)

### 문제

2×N 크기의 벽을 2×1, 1×2, 1×1 크기의 타일로 채우는 경우의 수를 구해보자.

<br/>

### 입력

첫째 줄에 N(1 ≤ N ≤ 1,000,000)이 주어진다.

<br/>

### 출력

첫째 줄에 경우의 수를 1,000,000,007로 나눈 나머지를 출력한다.

<br/>

### 예제 입력 1

```
1
```

<br/>

### 예제 출력 1

```
2
```

<br/>

### 예제 입력 2

```
2
```

<br/>

### 예제 출력 2

```
7
```

<br/>

### 예제 입력 3

```
3
```

<br/>

### 예제 출력 3

```
22
```

<br/>

### Source code 1

```c
#include <stdio.h>

int d[1000001];
	
long long int dp(int d[], int x) {
	if(x == 0) return 1;
	if(x == 1) return 2;
	if(x == 2) return 7;
	if(d[x] > 0) return d[x];
	long long int result = 3 * dp(d, x - 2) + 2 * dp(d, x - 1);
	for(int i = 3; i <= x; i++) {
		result += (2 * dp(d, x - i)) % 100000007;
	}
	return d[x] = result % 100000007;
}

int main(void)
{
	int x;
	scanf("%d", &x);
	printf("%d", dp(d, x));
	return 0;
}
```

* 위 경우, 시간 복잡도가 사실상 **O(N^2)**가 나와, 연산을 처리하는데 매우 큰 시간이 소요된다.
* 따라서 2차원 다이나믹 프로그래밍 기법을 이용해 해결하는 방법을 사용 해야한다.

<br/>

### Source code 2

```c
#include <stdio.h>

long long int d[1000001][2];

long long int dp(int x) {
	d[0][0] = 0;
	d[1][0] = 2;
	d[2][0] = 7;
	d[2][1] = 1;
	for(int i = 3; i <= x; i++) {
		d[i][1] = (d[i - 1][1] + d[i - 3][0]) % 1000000007;
		d[i][0] = (3 * d[i - 2][0] + 2 * d[i - 1][0] + 2 * d[i][1]) % 1000000007;
	}
	return d[x][0];
}

int main(void)
{
	int x;
	scanf("%d", &x);
	printf("%lld", dp(x));
	return 0;
}
```

* 위 수정된 코드로 진행하면 시간 복잡도는 **O(N)** 정도로 되어, 시간 초과 문제는 해결된다.
* 즉, 2씩 더해지는 부분을 배열의 별도 행으로 만들어 처리해 주는 것이다.
* 또한 값이 커지는 경우 오버플로우를 방지하기 위해 int형을 long형으로 처리해주었다.

<br/>

### Tips

* 문제의 규칙성을 찾아서 점화식을 찾는 것이 중요하다.
* 가장 마지막에 오는 타일 기준으로 생각했을 때, 가능한 경우는 다음 다섯 가지 경우가 존재한다.

![img](https://postfiles.pstatic.net/MjAxODAzMjFfMTcg/MDAxNTIxNTc1NDU3MTEz.wp7A8dxwAi-Oy3ha_AD5nFS9U-nqUBb8Acoua6IAC4og.Tqsk-Vo09CNhpSCS5CkDbWuivdfpyZ5qGFCuk99IWHgg.PNG.ndb796/image.png?type=w773)

* 하지만, 이게 끝이 아니라 길이가 3부터 하나씩 증가할 때마다 고유한 모양이 2개씩 나타난다.

* 따라서 점화식은 **D[i] = 3 \* D[i - 2] + 2 \* D[i - 1] + (2 \* D[i - 3] + 2 \* D[i - 4] ... 2 \* D[0])** 이다!

<br/>

[목록 보기](../../../README.md)