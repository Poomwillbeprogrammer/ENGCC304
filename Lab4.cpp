#include <stdio.h>
int main()
{
    char id{10};
    int workinghour;
    int Salary;
    int Answer = 0;

    printf("Enter your ID: ");
    scanf("%s", &id);

    printf("Enter your working hours: ");
    scanf("%d", &workinghour);

    printf("Enter you sarary/hrs: ");
    scanf("%d", &Salary);

    Answer = workinghour * 30 * Salary;

    printf("\n");
    printf("Employees ID = %s", id);
    printf("Your salary is: %s THB.\n", Answer);
    printf("\n");

        return 0;
} // End main function!!