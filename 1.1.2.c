#include<stdio.h>
void main() {
	int a[20], i, j, n, key, flag = 0, low, high, mid, temp;
	printf("Enter value of n : ");
	scanf("%d", &n);

	// Write the code to read an array of elements
int pos;
	for (i = 0; i < n; i++) {
		printf("Enter element for a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("Enter key element : ");
	scanf("%d", &key);
for(i = 0; i < n -1; i++) {
	for (int j = i+1; j < n; j++) {
		if( a[i] >a[j]) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}

	printf("After sorting the elements in the array are\n");
	// Write the code to display the elements
	for(i = 0; i < n; i++) {
		printf("Value of a[%d] = %d\n", i, a[i]);
	}
	low = 0; // Complete the statement
	high = n-1; // Complete the statement
	
	// Write the code to search an element using  binary search process
	while (low <= high)
		{
			mid = (low + high) / 2;
			if(a[mid] == key)
			{
				flag = 1;
				pos = mid;
				break;
			}
			else if(a[mid] < key)
			{
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}
	if ( flag) { // Write the condition part
		printf("The key element %d is found at the position %d\n", key, pos ); // Complete the statement
	} else {
		printf("The Key element %d is not found in the array\n",  key  ); // Complete the statement
	}
}
