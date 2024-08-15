#include <stdio.h>

int main() {
   int i = 0, j = 0, number = 0 ;

   printf( "Please insert line : " ) ;
   scanf( "%d", &number ) ;

   if( number % 2 == 0 ) {
      for( i = 0 ; i < number ; i++ ) {
          for( j = 0 ; j < number ; j++ ) {
              if( i == j ) {
                 printf(" 1 ") ;
              } else {
                 printf(" 0 ") ;
              }
          }//end for
          printf( "\n" ) ;
      }
   } else {
      for( i = 0 ; i < number ; i++ ) {
          for( j = 0 ; j < number ; j++ ) {
              if( j == number - i - 1 ){
                 printf( " 1 " ) ;
              } else {
                 printf( " 0 " ) ;
              }
          }//end for
          printf( "\n" ) ;
      }
   }   

   return 0 ;
}//end function
