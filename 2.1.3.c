#include<stdio.h>
void main() {
	int a[20], i, n, j, temp, pos;
	printf("Enter value of n : ");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		printf("Enter element for a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("Before sorting the elements in the array are\n");
	for(i = 0; i < n; i++) {
		printf("Value of a[%d] = %d\n", i, a[i]);
	}

	for(i = 1; i < n; i++) {
		temp = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > temp) {
			a[j+1] = a[j];
			j = j -1 ;
		}
		a[j + 1] = temp;
	}
	printf("After sorting the elements in the array are\n");
	for(i = 0; i < n; i++) {
		printf("Value of a[%d] = %d\n", i, a[i]);
	}
}
