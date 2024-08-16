#include <stdio.h>

int main()
{
    int t = 0;
    printf("Enter matrix number:\n");
    scanf("%d", &t);
  
    int n = t;
    int matrix[n][n];

    
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    matrix[i][j] = 1;
                }
                else
                {
                    matrix[i][j] = 0;
                }//end if else
            }//end for loop
        }//end for loop
    }//end if else
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + j == n - 1)
                {
                    matrix[i][j] = 1;
                }
                else
                {
                    matrix[i][j] = 0;
                }//end if else
            }//end for loop
        }//end for loop
    }//end else
    printf("Matrix %dx%d:\n", n, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }//end for loop

    return 0;
}//end main function