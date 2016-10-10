/**
 * rabbit.c 
 * A rabbit can jump at most 50 centimetres. It needs to cross a
 * river, with rocks positioned in a straight line in the river.
 * The program computes the minimum number of jumps for the rabbit
 * to cross to the other side of the river.
 */

#include <stdio.h>

int countJumps(int [], int);

int main(void) {
	int num_rocks;            // including opposite bank
	int rocks[20];
	int steps = countJumps(rocks,num_rocks);
	printf("Tesing\n");
	printf("Enter number of rocks: %d",steps);
	scanf("%d", &num_rocks);

	return 0;
}

// Counts the minimum number of jumps the rabbit needs
// to take to get to the other side of the river.
// Precond: size > 0
int countJumps(int rocks[], int size) {

	int start_pos = 0, target_pos = 0, difference, i, countJumps = 0;
	printf("Start\n");
	for(i=0;i<size;i++){
		difference = rocks[i] - start_pos;
		//Reach the last and difference less than 50
		if(i == size -1 && difference <= 50){

			countJumps++;
			return countJumps;
		}


		if( difference > 50){
			target_pos = rocks[i-1];
			printf("Target_Pos = %d\n",target_pos);
			//Start and Target becomes the same, no place to go
			if(target_pos == start_pos){
				return -1;
			}
			i--;
			start_pos = target_pos;
			countJumps++;
		}
	}

	return countJumps; // this is just a stub; replace it with the correct value
}

