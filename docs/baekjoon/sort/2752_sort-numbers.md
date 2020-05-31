# 수 정렬하기2 (2752번)

### 문제

동규는 세수를 하다가 정렬이 하고싶어졌다.

숫자 세 개를 생각한 뒤에, 이를 오름차순으로 정렬하고 싶어 졌다.

숫자 세 개가 주어졌을 때, 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램을 작성하시오.

<br/>

### 입력

숫자 세 개가 주어진다. 이 숫자는 1보다 크거나 같고, 1,000,000보다 작거나 같다. 이 숫자는 모두 다르다.

<br/>

### 출력

제일 작은 수, 그 다음 수, 제일 큰 수를 차례대로 출력한다.

<br/>

### 예제 입력 1

```
3 1 2
```

<br/>

### 예제출력1

```
1 2 3
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

- 데이터의 개수는 3이다. 

<br/>

[목록 보기](../../../README.md)