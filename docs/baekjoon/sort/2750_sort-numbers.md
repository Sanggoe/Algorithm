# 수 정렬하기1 (2750번)

### 문제

N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

<br/>

### 입력

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

<br/>

### 출력

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

<br/>

### 예제 입력 1

```
5
5
2
3
4
1
```

<br/>

### 예제출력1

```
1
2
3
4
5
```

<br/>

### Source code

```c
#include <stdio.h>

int array[1001];  

int main(void) {
	int number, i, j, min, index, temp;
	scanf("%d", &number);
	
	for(i=0; i<number; i++) {
		scanf("%d", &array[i]);
	}
	
    // select sort를 사용
	for(i=0; i<number; i++) {
		min = 1001;	// 입력값 최대가 1000이므로 
		for(j=i; j<number; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(i=0; i<number; i++) {
		printf("%d\n", array[i]);
	}
}
```

<br/>

### Tip

- 데이터의 개수가 1000 이하이다. 즉, N^2 = 1,000,000 면 큰 문제 없이 수행할 수 있다.

- 보통 온라인 채점 시스템의 경우에는, 1초에 1억번 정도 연산 가능하다고 가정하고 풀면 된다.

- 웬만해서 알고리즘 문제를 풀 땐,  **데이터의 개수+1** 만큼 선언을 해주는게 정신건강에 이롭다.