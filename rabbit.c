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
	int rock_pos = 0, distance = 0, countJumps = 0, i;

	while(rocks[rock_pos] - distance <= 50){
		//Update rock_pos to i
		for(i = rock_pos;i < size; i++){
			//After find the next rock, update information and then break from the loop
			if(rocks[i] - distance > 50){
				rock_pos = i;
				distance = rocks[i-1];
				countJumps++;
				break;	
			}
			//The only way to win this game is to reach the last rock, stop and return countJumps
			if(rocks[i] == rocks[size - 1]){
				countJumps++;
				return countJumps;
			}
		}

	}

	return -1; // this is just a stub; replace it with the correct value
}

