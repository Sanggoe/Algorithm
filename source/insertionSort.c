/* Bubble Sort Algorithm
각 숫자를 적절한 위치에 삽입하는 방법
선택 정렬의 시간 복잡도 : N*(N+1)/2 => O(N^2)
* 필요할 때만 위치를 바꾸기 때문에 같은 시간복잡도에 비해서 비교적 효율적인 알고리즘
*/

#include <stdio.h>

int main(void) {
	int i, j, temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	
	for(i=0; i<9; i++) {
		j=i;
		while (array[j] > array[j+1]) {
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	
	for(i=0; i<10; i++) {
		printf("%d ", array[i]);
	}
	return 0; 
}
