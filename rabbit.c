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
	//int num_rocks = 10;            // including opposite bank
	//int rocks[20] = {6, 10, 19, 23, 29, 30, 39, 41, 44, 48 };
	int num_rocks,i;            // including opposite bank
	int rocks[20];
	
	printf("Enter number of rocks:");

	scanf("%d", &num_rocks);
		for(i = 0; i < num_rocks; i++){
		scanf("%d",&rocks[i]);
	}

	int steps = countJumps(rocks,num_rocks);
	printf("Steps are %d\n",steps);

	return 0;
}

// Counts the minimum number of jumps the rabbit needs
// to take to get to the other side of the river.
// Precond: size > 0

/*
The first rock distance is 0

rocks[next] - distance <= 50
	Loop to Find next rock position
		update current position using next position - 1
		update distance using rocks[current]
		update jump++
		break from loop
	End Loop

	if distance == rocks[size-1] 
		update jump++
		return REACH THE END
	END IF
Continue Check rocks[next] - distance <= 50

If rocks[next]- distance > 50
	No valid jump
	return -1
End if
*/

int countJumps(int rocks[], int size) {

	int rock_pos = 0, distance = 0, countJumps = 0, i;

	while(rocks[rock_pos] - distance <= 50){

		//Update rock_pos to i
		for(i = rock_pos;i < size; i++){

			if(rocks[i] - distance > 50){
				rock_pos = i;
				distance = rocks[i-1];
				countJumps++;
				break;
			}else if(rocks[i] == rocks[size - 1]){
				countJumps++;
				return countJumps;
			}
		}

	}

	return -1; // this is just a stub; replace it with the correct value
}
 
