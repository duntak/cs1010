// partition.c
#include <stdio.h>
#define MAX_SIZE 20

void printArray(int [], int);
void partition(int [], int, int);

int main(void) {
	int size, i , pivot;
	int arr[MAX_SIZE];

	printf("Enter the number of elements: ");
	scanf("%d", &size);

	printf("Enter %d integers: ", size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printArray(arr,size);

	printf("Enter pivot: ");
	scanf("%d",&pivot);

	partition(arr,size,pivot);
	printArray(arr,size);

	return 0;
}

// Print array arr
void printArray(int arr[], int size) {
	int i;

	for (i=0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/*

Loop from 0 to the end to find number more than pivot
	set temp euqal to this number
	Loop from current to the end to find number that is less than pivot
		Swap temp with this number
		Break Loop
	End Loop
End Loop	

*/
void partition(int arr[MAX_SIZE], int size, int pivot){
	int i, j, temp; 

	for(i=0;i<size;i++){
		if(arr[i] > pivot){
			temp = arr[i];
			for(j=i;j<size;j++){
				if(arr[j] < pivot){
					arr[i] = arr[j];
					arr[j] = temp;
					break;
				}
			}
		}
	}
}