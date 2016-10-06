Eg1.

1
21
321
4321
54321


Step 1: Find the first value and last value for each col
first = 1,2,3,4,5   last value = 1

Step 2: Identify which one is your variable
first value is the variable

Step 3: Write inner loop (>= is used because col value is decreasing)
for(j=first_value; j >= last_value; j--) -> for(j = i; j >= 1; j--)

Step 4: Let variable be i
i = 1,2,3,4,5

Step 5: Find the first value and last value of this variable
first = 1     last = 5

Step 6: write outer loop (<= is used becasue the value of i is increasing)
for(i = first; i <= last; i++) -> for(i = 1; i <= 5; i++)

Step 7: Write actual code

```C
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
```

Eg 2.

5
54
543
5432
54321


Step 1: Find the first value and last value for each col
first = 5   last value = 5,4,3,2,1

Step 2: Identify which one is your variable
last value is the variable

Step 3: Write inner loop (>= is used because col value is decreasing)
for(j=first_value; j >= last_value; j--) -> for(j = 5; j >= i; j--)

Step 4: Let variable be i
i = 5,4,3,2,1

Step 5: Find the first value and last value of this variable
first = 5     last = 1

Step 6: write outer loop (>= is used becasue the value of i is decreasing)
for(i = first; i >= last; i--) -> for(i = 5; i >= 1; i--)


Eg3 : Values in the col did not change

5
44
333
2222
11111

Step 1: Find the first value and last value for each col
first = 5,4,3,2,1   last value = 5,4,3,2,1

Step 2: Identify which one is your variable
Since Both are variables, set: first value = 5    last value is the variable
first = 5   last value = 5,4,3,2,1

Step 3: Write inner loop (>= is used because col value is decreasing)
for(j=first_value; j >= last_value; j--) -> for(j = 5; j >= 1; j--)

Step 4: Let variable be i
i = 5,4,3,2,1

Step 5: Find the first value and last value of this variable
first = 5     last = 1

Step 6: write outer loop (>= is used becasue the value of i is decreasing)
for(i = first; i >= last; i++) -> for(i = 5; i >= 1; i++)




