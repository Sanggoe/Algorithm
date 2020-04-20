/* Selection Sort Algorithm
���� ���� ���� �����ؼ� ���� ������ ������ ���
���� ������ �ð� ���⵵ : N*(N+1)/2 => O(N^2)
*/
 
#include <stdio.h>

int main(void) {
	int i, j, min, index, temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i=0; i<10; i++) {
		min = 11;
		for(j=i; j<10; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		// swaping ���� 
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i=0; i<10; i++) {
		printf("%d ", array[i]);
	}
	
	return 0;
}
