# 2xn 타일링 2 (11727번)

### 문제

2×n 직사각형을 1×2, 2×1과 2×2 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.

아래 그림은 2×17 직사각형을 채운 한가지 예이다.

![img](https://www.acmicpc.net/upload/images/t2n2122.gif)

<br/>

### 입력

첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1,000)

<br/>

### 출력

첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다.

<br/>

### 예제 입력 1

```
2
```

<br/>

### 예제 출력 1

```
3
```

<br/>

### 예제 입력 2

```
8
```

<br/>

### 예제 출력 2

```
171
```

<br/>

### 예제 입력 3

```
12
```

<br/>

### 예제 출력 3

```
2731
```

<br/>

### Source code

```c
#include <stdio.h>

int d[1001];

int dp(int x) {
	if(x == 1) return 1;
	if(x == 2) return 2;
	if(d[x] != 0) return d[x];
	return d[x] = (dp(x - 1) + dp(x - 2)) % 10007; // overflow 방지 목적
}

int main(void) {
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));
}
```

<br/>

### Tips

* 문제의 규칙성을 찾아서 점화식을 찾는 것이 중요하다.
* 가장 마지막에 오는 타일을 기준으로 생각했을 때, 가능한 경우는 다음 세 가지 경우이다.

![img](https://postfiles.pstatic.net/MjAxODAzMjFfMTUx/MDAxNTIxNTcyNDU1MjQ1.LNxIYQN3FBwwNZAC8DEYwVoKm3QPYtz3Vjjcjumq_lcg.4QfFObqADazj3so8QIFZrAJhLlp3Zfva1F0iDAXXcO0g.PNG.ndb796/image.png?type=w773)

* 길이가 1이 추가될 때랑, 2가 추가될 때를 고려해서 생각하자.
* 3이 추가될 경우는, 1이 추가되는 경우 등 앞의 경우에 포함되기 때문에 생각하지 않는다.
* 점화식은 **D[i] = D[i - 1] + 2 \* D[i - 2]** 이다!

<br/>

[목록 보기](../../../README.md)