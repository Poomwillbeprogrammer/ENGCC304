#include <stdio.h>

void isArmstrong(int num)
{
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;

    // นับจำนวนหลักของตัวเลข
    while (originalNum != 0)
    {
        originalNum /= 10;
        n += 1;
    }

    originalNum = num;

    // คำนวณผลรวมของแต่ละหลักที่ยกกำลังจำนวนหลัก
    while (originalNum != 0)
    {
        remainder = originalNum % 10;

        // ยกกำลัง
        int power = 1;
        for (int i = 0; i < n; i++)
        {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }
    
    if (result == num)
    {
        printf("Pass.\n");
    }
    else
    {
        printf("Not Pass.\n");
    }
}
    int main()
    {
        int num ;
        // รับค่าตัวเลขจากผู้ใช้
        printf("Enter Number: ");
        scanf("%d", &num);

        isArmstrong(num);

        return 0;
    }
