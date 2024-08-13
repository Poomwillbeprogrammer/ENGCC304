#include <stdio.h>
int main()
{ // start main
    int Score = 0;

    printf("Enter your score: ");
    scanf("%d", &Score);

    if (Score < 50)
    {
        printf("F");
    }
    else if (Score >= 50 && Score < 55)
    {
        printf("D");
    }
    else if (Score >= 55 && Score < 60)
    {
        printf("D+");
    }
    else if (Score >= 60 && Score < 65)
    {
        printf("C");
    }
    else if (Score >= 65 && Score < 70)
    {
        printf("C+");
    }
    else if (Score >= 70 && Score < 75)
    {
        printf("B");
    }
    else if (Score >= 75 && Score < 80)
    {
        printf("B+");
    }
    else if (Score >= 80 && Score <= 100)
    {
        printf("A");
    }
    else
    {
        printf("Invalid score");
    } // end if else

} // end main