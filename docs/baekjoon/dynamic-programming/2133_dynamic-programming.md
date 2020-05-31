# 타일 채우기 (2133번)

### 문제

3×N 크기의 벽을 2×1, 1×2 크기의 타일로 채우는 경우의 수를 구해보자.

<br/>

### 입력

첫째 줄에 N(1 ≤ N ≤ 30)이 주어진다.

<br/>

### 출력

첫째 줄에 경우의 수를 출력한다.

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

### 힌트

아래 그림은 3×12 벽을 타일로 채운 예시이다.

![img](https://onlinejudgeimages.s3-ap-northeast-1.amazonaws.com/upload/images/2663_1.jpg)

<br/>

### Source code

```c
#include <stdio.h>

int d[1001];

int dp(int x) {
	if(x == 0) return 1;
	if(x == 1) return 0;
	if(x == 2) return 3;
	if(d[x] != 0) return d[x];
	int result = 3 * dp(x - 2);
	for(int i = 3; i <= x; i++) {
		if(i % 2 == 0)
			result += 2 * dp(x - i);
	}
	return d[x] = result;
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
* 가장 마지막에 오는 타일 기준으로 생각했을 때, 가능한 경우는 다음의 세 가지 경우가 존재한다.

![img](https://postfiles.pstatic.net/MjAxODAzMjFfMTM5/MDAxNTIxNTczNjg3ODE2.5AE-o8zcBJwaBLyoYC4-QmYYzfv_MMbASca4ELz9xE4g.DH4F3IEcmd2VOHZEGGKjqYeLi2AdayPSva_WcNbOgjMg.PNG.ndb796/image.png?type=w773)

* 길이가 3이 추가될 경우 가능한 모양을 고려해서 생각하자.
* 하지만, 이게 끝이 아니라 길이가 4일 경우, 6일 경우, 8일경우 등 짝수일 때마다 고유한 모양이 2개씩 나타난다.

* 따라서 점화식은 **D[i] = 3 \* D[i - 2] + (2 \* D[i - 4] + 2 \* D[i - 6] ... 2 \* D[0])** 이다!

<br/>

[목록 보기](../../../README.md)