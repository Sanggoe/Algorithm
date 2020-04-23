# 수 정렬하기3 (2751번)

### 문제

N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

<br/>

### 입력

첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.

<br/>

### 출력

첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.

<br/>

### 예제 입력 1

```
5
5
4
3
2
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

int array[3];  

int main(void) {
	int i, j, min, index, temp;
		
	for(i=0; i<3; i++) {
		scanf("%d", &array[i]);
	}
	
	for(i=0; i<3; i++) {
		min = 1000001;	// 입력값 최대가 1000000이므로 
		for(j=i; j<3; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	
	for(i=0; i<3; i++) {
		printf("%d ", array[i]);
	}
}
```

<br/>

### Tip

- 데이터의 개수는 최대 1,000,000개 이다. 