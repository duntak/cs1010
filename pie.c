#include <stdio.h>
#define MAX_SLICES 200000

int maxCherries(int [], int);

int main(){
	int i, slices, arr[MAX_SLICES];
	printf("Enter number of slices: ");
	scanf("%d", &slices);
	
	printf("Enter numbers of cherries: ");
	for(i=0;i<slices;i++){
		scanf("%d",&arr[i]);
	}


	printf("The maximum number of cherries Alice can get is %d.\n", maxCherries(arr,slices)); // Incomplete

	return 0;
}


/*
Find half Cherry cmount using total / 2 + 1
Set start to 0, End to 0, 
While alice < half_total	
	alice = arr[end++] + alice
End Loop
*Take note that, by now, alice has one position more than half-sum

Set end to end - 1, change the postision back to correct end

Loop from start to slies
	If alice + next slice is less than half sum, 
		Add next slice to alice
		Update end position
	Else
		Remove start slice from alice
		Update start position
	End if

	if alice more than max
		set alice to max
	End if

	Ensure end is always from 0 to size by using end % slices
End Loop


*/

int maxCherries(int arr[MAX_SLICES], int slices){
	int start = 0, end = 0,i, total = 0, half_total = 0,max = 0, alice = 0;
			
	for(i=0;i<slices;i++){
		total = total + arr[i];
	}

	half_total = total / 2 + 1;	
	
	while(alice < half_total){
		alice = alice + arr[end++];
	}

	end = end - 1;

	while(start < slices){

		//If alice + next slice is less than half sum, add next slice to alice and change end position
		if(alice + arr[end] < half_total){
			alice = alice + arr[end];
			end++;
		}else{
			alice = alice - arr[start];
			start++;
		}

		if(alice > max){
			max = alice;
		}
		//Keep end within the range of 0 to size - 1
		end = end % slices;

	}

	return max;
}