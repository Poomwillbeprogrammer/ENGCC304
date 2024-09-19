#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int loop = 10;
    int j = 0;
    printf("enter lengh : \n");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter num [%d] : \n", i + 1);
        scanf("%d", &num[i]);
    } // end for
    printf(" Index :");
    for (int i = 0; i < n; i++)
    {
        printf("%4d ", i + 1);
    } // end for
    printf("\n");
    printf(" Array :");

    for (int i = 0; i < n; i++)
    {
        if (num[i] < 2)
        {
            printf("%4c ", '#');
        } // end if
        else
        {
            for (j = 2; j * j <= num[i]; j++) // หารากที่2และนำไปมอด
            {
                if (num[i] % j == 0)
                {
                    printf("%4c ", '#');
                    break;
                } // endif

            } // end for
            if (j * j > num[i]) // คูนไปเรื่อยๆถ้าj*jมากกว่าจำนวนในarrayเมื่อไหร่ แสดงว่าเป็นจำนวนเฉพาะ
            {
                printf("%4d ", num[i]);
            } // end if
        } // endelse
    } // end for loop

    printf("\n");

    return 0;
} // end main