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

int number, array[1000001];

void quickSort(int *data, int start, int end) {
	if (start >= end) {
		return;
	}
	
	int key = start;
	int i = start+1;
	int j = end;
	int temp;
	
	while(i<=j) {
		while(data[i] <= data[key]) {
			i++;
		}
		while(data[j] >= data[key] && j > start) {
			j--;
		}
		if(i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
		
		quickSort(data, start, j-1);
		quickSort(data, j+1, end);
	}
}

int main(void) {
	int i;
	
	scanf("%d", &number);
	for(i=0; i<number; i++) {
		scanf("%d", &array[i]);
	}
	quickSort(array, 0, number-1);
	
	for(i=0; i<number; i++) {
		printf("%d\n", array[i]);
	}
}
```

<br/>

### Tip

- 데이터의 개수는 최대 1,000,000개 이다. 
- 시간 복잡도가 logN을 요구하는 문제이다.
- 기본적인 Quick 정렬의 경우, 최악의 경우 **NxN** 이기에 보통은 틀리도록 문제를 낸다.
- ... 예전과 다르게 Test case를 더 추가해서 지금은 Quick 정렬로 틀리게 한다 ...  나중에 다시 풀어야
- #include <algorithm>  의  sort 함수를 이용하면 정확하게 풀 수 있다.