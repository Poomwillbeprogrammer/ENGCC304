#include <stdio.h>

void isArmstrong(int num)
{ // start void isArmstong
    int originalNum , remainder , result = 0 , n = 0 ;
    originalNum = num ;
    // นับจำนวนหลักของตัวเลข
    while ( originalNum != 0 )
    {
        originalNum /= 10 ;
        n += 1 ;
    } // end while

    originalNum = num ; // นำเลขที่กรอกใส่ลงตัวแปร originalNum

    // คำนวณผลรวมของแต่ละหลักที่ยกกำลังจำนวนหลัก
    while ( originalNum != 0 )
    {
        remainder = originalNum % 10 ;

        // ยกกำลัง
        int power = 1 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            power *= remainder ;
        }//end fo

        result += power ; // นำเลขที่ยกกำลังแล้วใส่ลงตัวแปรresult
        originalNum /= 10 ;
    } // end while

    if ( result == num )
    {
        printf( "Pass.\n" ) ;
    }//end for
    else
    {
        printf("Not Pass.\n") ;
    }//end else
}//end function
int main ()
    {//start main
        int num ;
        // รับค่าตัวเลขจากผู้ใช้
        printf ( "Enter Number: " ) ;
        scanf( "%d" , &num );

        isArmstrong(num);//go to isArmstrong Function

        return 0 ;
    }//end main

