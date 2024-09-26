#include <stdio.h>
#include <string.h>
int main ()
{//start main
    char word [100] ;
    int i , palindrome = 1 ;

    printf ( "Enter a word\n" ) ;
    scanf ( "%s" , word ) ;

    size_t length = strlen (word) ; // ใช้ size_t เพื่อเก็บขนาด (size) ของอาเรย์ จะไม่นับตัวเลขแต่จะนับตัวอักษรและ spacebar

    printf( "Length of the string is: %zu \n" , length ) ; 
    for ( i=0 ; i < length /2 ; i++ )
    {
        if ( word[i] != word[length - 1 - i] )
        {
            if( word[i] != word[length - i - 1] )
            palindrome = 0 ;
            break;
        }//end if
    }//end for
    
    if ( palindrome == 1 ) 
    {
        printf( "pass" ) ;
    }//end if
    else
    {
        printf( "not pass" ) ;
    }//end else
    return 0 ;
}//end main