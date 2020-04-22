/* Quick Sort Algorithm
특정한 값을 기준으로 큰 숫자와 작은 숫자를 서로 교환한 뒤에 배열을 반으로 나누는 방식 
Quick 정렬의 시간 복잡도 : => O(N*logN)
* 앞선 정렬 알고리즘 중에 효율이 가장 뛰어난 알고리즘 
*/

#include <stdio.h>

int number = 10;
int data[10] = {4, 9, 2, 5, 7, 10, 1, 3, 6, 8};

void quickSort(int *data, int start, int end) {
	if (start >= end ) { // 원소가 1개인 경우
		return;
	}
	
	int key = start; // 키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;
	
	while (i<=j) { // 엇갈릴 때 까지 반복 
		while (data[i] <= data[key]) { // 키 값보다 큰 값을 만날 때 까지 
			i++;
		}
		while (data[j] >= data[key] && j > start) { // 키 값보다 작은  값을 만날 때 까지 
			j--;
		}
		if (i>j) { // 현재 엇갈린 상태면 키 값과 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
		
		// 함수의 재귀적 호출을 통해 정렬을 반복 수행 해준다. 
		quickSort(data, start, j-1);
		quickSort(data, j+1, end);
	}
}

int main(void) {
	int i;
	
	quickSort(data, 0, number-1);
	
	for (i=0; i<number; i++) {
		printf("%d ", data[i]);
	}
}
