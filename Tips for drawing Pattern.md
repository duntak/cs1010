Eg.

1
21
321
4321
54321


Step 1: Find the first value and last value for each col
first = 1,2,3,4,5   last value = 1

Step 2: Identify which one is your variable
first value is the variable

Step 3: Write inner loop
for(j=first_value; j >= last_value; j--) -> for(j = i; j >= 1; j--)

Step 4: Let first_value variable be i
i = 1,2,3,4,5

Step 5: Find the first value and last value of this variable
first = 1     last = 5

Step 6: write outer loop
for(i = first; i <= last; i++) -> for(i = 1; i <= 5; i++)

Step 7: Write actual code

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

