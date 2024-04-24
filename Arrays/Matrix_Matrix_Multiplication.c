#include <stdio.h>
#include <conio.h>

int main()
{
    int two_d[2][2] = {{1, 2},
                       {3, 4}};

    int new_two_d[2][2] = {{1, 2},
                           {3, 4}};

    for (int i = 0; i < 2; i++)

    {
        for (int j = 0; j < 2; j++)
        {
            int matrix_multiplication = two_d[i][j] * two_d[i][j];
            printf("%d", matrix_multiplication);
        }
        printf("\n");
    }

    return 0;
}