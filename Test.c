#include <stdio.h>
#include <conio.h>
#include <math.h>

int loopIt(int *arr, int beg)
{
    int n = sizeof(arr) / sizeof(int);
    for (int i = n; i < n; i++)
    {
        return 0;
    }
}

// [0, 1, 1, 0, 1, 1, 1, 0]

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int maxConsecutives = 0;
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        // if (nums[i] == 0)
        // {
        //     return 0;
        // }

        if (nums[i] == 1)
        {
            for (int j = i; j < numsSize; j++)
            {
                maxConsecutives++;

            }
        }

    }
    return maxConsecutives;
}

void main()
{
    int arr[8] = {0, 1, 1, 0, 1, 1, 1, 0};
    int n = 8;
    int a = findMaxConsecutiveOnes(arr, n);
    printf("%d", a);
    printf("%s", "Welcome to the Vim Editor");

}


