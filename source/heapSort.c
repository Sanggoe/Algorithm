#include <stdio.h>

int number = 9;
int heap[9] = {7,4,5,8,3,2,9,1,6};

int main() {
	int i, c, root, temp;
	
	// ���� ��ü Ʈ�� ������ �� ������ �ٲ۴�. 
	for (i = 1; i < number; i++) {
		c = i;
		do {
			root = (c-1)/2; // �θ� ����� �ε��� 
			if (heap[root] < heap[c]) {
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
	}
	
	// ũ�⸦ �ٿ����� �ݺ������� ���� ����
	for (i = number-1; i >= 0; i--) {
		temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;
		root = 0;
		c = 1;
		do {
			c = 2 * root + 1;
			// �ڽ� �߿� �� ū ���� ã��
			if (heap[c] < heap[c + 1] && c < i -1) {
				c++;
			} 
			// ��Ʈ���� �ڽ��� �� ũ�ٸ� ��ȯ
			if (heap[root] < heap[c] && c < i) {
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}
	for (i = 0; i < number; i++) {
		printf("%d ", heap[i]);
	}
}
