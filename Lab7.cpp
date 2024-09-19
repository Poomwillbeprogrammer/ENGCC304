#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Min = 1;
    int Max = 100;
    int guess = 1;
    int guesses = 0;
    int answer = 0;
    int Heart = 100;
    int re = 1;
    int lower_guess = Min, upper_guess = Max;

    srand(time(0));
    // สร้างตัวเลขระหว่างminถึงmax
    answer = (rand() % (Max - Min + 1)) + Min;

    printf("You have 100 life when you guess incorect you will lose 10 Life \n \t \t when you have 0 life you will lose the game \n ");
    printf("******************************* \n ");
    printf("Press any key to continue \n ");
    printf("******************************* \n ");
    getchar();

    while (re != -1) // ลูปซ้ำจนกว่าจะออก
    {
        answer = (rand() % (Max - Min + 1)) + Min;
        Heart = 100;
        guesses = 0;
        guess = 0;
        lower_guess = Min;
        upper_guess = Max; // เซ็ตค่าใหม่ตอนที่กดplay again

        while (Heart > 0 && guess != answer) // โปรแกรมจะลูปไปเรื่อยๆจนกว่า ใจจะเท่ากับหรือน้อยกว่า 0 และ ตัว
        {
            printf(" Guess a number between %d and %d: ", lower_guess, upper_guess);
            scanf("%d", &guess);

            if (guess > answer)
            {
                printf("Too High! Try again \n ");
                Heart -= 10;
                if (guess < upper_guess)
                    upper_guess = guess - 1;
                printf("Now you have --%d-- Heart \n ", Heart);
                printf("Guess winning(%d-%d) \n ", lower_guess, upper_guess);
            } // end if
            else if (guess < answer)
            {
                printf("Too low! Try again. \n ");
                Heart -= 10;
                if (guess > lower_guess)
                    lower_guess = guess + 1;
                printf("Now you have --%d-- Heart \n ", Heart);
                printf("Guess winning(%d-%d) \n ", lower_guess, upper_guess);
            } // end else if
            else
            {
                printf("You got it! The answer was %d. \n ", answer);
            } // end else
            guesses++;
        } // end while

        if (Heart <= 0)
        {
            printf("You lose! The correct answer was %d. \n ", answer);
        } // end if
        else
        {
            printf("Congratulations! You guessed the number in %d guesses. \n ", guesses);
        } // end if else

        printf("***************************** \n ");
        printf("Do you want to play again? ( Press 1 to play again, -1 to exit ): \n ");
        printf("*****************************\n");
        scanf("%d", &re);
    } // end while

    printf("Thanks for playing! \n \t please Grade *A* Na Kub Jarn Tum");
    return 0;
} // end main