#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int nums[] = {-1,23,45,21,-6,76};
    int len = sizeof(nums) / sizeof(int);
    int max = INT_MIN;
    for(int i = 0, j = 1; j < len; i++, j++)
    {
        if(nums[i] + nums[j] > max)
            max = nums[i] + nums[j];
    }
    
    printf("The Max Pair is : %d\n", max);
    return 0;
}