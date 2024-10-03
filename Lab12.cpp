#include <stdio.h>
#include <string.h>

struct Student
{
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S; // set struct Student with S

// ฟังก์ชันสำหรับคำนวณเกรด
char calculateGrade(float score)
{
    if (score > 100 || score <0)
    {
        printf("Invalid score") ;
        return 0 ;
    }
    else
    {
        if (score >= 80)
            return 'A';
        else if (score >= 70)
            return 'B';
        else if (score >= 60)
            return 'C';
        else if (score >= 50)
            return 'D';
        else
            return 'F';
    }

} // end function

// ฟังก์ชันแสดงผลเกรดของนักเรียนแต่ละคน
void displayGrades(S student)
{ // creation function displayGrade
    printf( "\nGrades for %s ( ID: %s ):\n" , student.Name , student.ID ) ;
    printf("Subject 1: %.2f - Grade %c\n" , student.ScoreSub1, calculateGrade(student.ScoreSub1)) ;
    printf("Subject 2: %.2f - Grade %c\n", student.ScoreSub2, calculateGrade(student.ScoreSub2));
    printf("Subject 3: %.2f - Grade %c\n", student.ScoreSub3, calculateGrade(student.ScoreSub3));
    printf("Subject 4: %.2f - Grade %c\n", student.ScoreSub4, calculateGrade(student.ScoreSub4));
    printf("Subject 5: %.2f - Grade %c\n", student.ScoreSub5, calculateGrade(student.ScoreSub5));
} // end function

int main()
{
    S students[3];

    printf("Enter the details of 3 students:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        getchar(); // Clear buffer in integer or string
        fgets(students[i].Name, 20, stdin);
        students[i].Name[strcspn(students[i].Name, "\n")] = 0; // Remove newline from fgets

        printf("ID: ");
        scanf("%s", students[i].ID);

        printf("Scores in Subject 1: ");
        scanf("%f", &students[i].ScoreSub1);

        printf("Scores in Subject 2: ");
        scanf("%f", &students[i].ScoreSub2);

        printf("Scores in Subject 3: ");
        scanf("%f", &students[i].ScoreSub3);

        printf("Scores in Subject 4: ");
        scanf("%f", &students[i].ScoreSub4);

        printf("Scores in Subject 5: ");
        scanf("%f", &students[i].ScoreSub5);
    } // end for

    // แสดงผลเกรดของนักเรียนทั้งหมด
    printf("\n-------- Grade Report --------\n");
    for (int i = 0; i < 3; i++)
    {
        displayGrades(students[i]);
    }

    return 0;
} // end main