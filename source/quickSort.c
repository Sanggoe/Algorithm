/* Quick Sort Algorithm
Ư���� ���� �������� ū ���ڿ� ���� ���ڸ� ���� ��ȯ�� �ڿ� �迭�� ������ ������ ��� 
Quick ������ �ð� ���⵵ : => O(N*logN)
* �ռ� ���� �˰��� �߿� ȿ���� ���� �پ �˰��� 
*/

#include <stdio.h>

int number = 10;
int data[10] = {4, 9, 2, 5, 7, 10, 1, 3, 6, 8};

void quickSort(int *data, int start, int end) {
	if (start >= end ) { // ���Ұ� 1���� ���
		return;
	}
	
	int key = start; // Ű�� ù��° ����
	int i = start + 1;
	int j = end;
	int temp;
	
	while (i<=j) { // ������ �� ���� �ݺ� 
		while (data[i] <= data[key]) { // Ű ������ ū ���� ���� �� ���� 
			i++;
		}
		while (data[j] >= data[key] && j > start) { // Ű ������ ����  ���� ���� �� ���� 
			j--;
		}
		if (i>j) { // ���� ������ ���¸� Ű ���� ��ü 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		} else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
		
		// �Լ��� ����� ȣ���� ���� ������ �ݺ� ���� ���ش�. 
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
