#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ) {

    srand(time(NULL)) ;

    int toplay = 1, score = 100, min = 1, max = 100, rand_number, answer ;

    while ( toplay == 1 ) {
        rand_number = rand() % 100 + 1 ;
        score = 100 ;

        printf( "Do you want to play game ( 1 = play, -1 = exit ) : " ) ;
        scanf( "%d", &toplay ) ;

        if ( toplay != 1 ) {
            return 1 ;
        } // end if         

        printf( "( Score = %d ) \n", score ) ;

        while ( true ) {
            printf( "Guess the winning number ( %d - %d ) : ", min, max ) ;
            scanf( "%d", &answer ) ;            

            if ( answer == rand_number ) {
                printf( "That is correct! The winning number is %d \n", rand_number ) ;
                printf( "Score this game : %d \n", score ) ;

                return 1 ;
            } else if ( answer < rand_number ) {
                score = score - 10 ;
                printf( "Sorry, the winning number is HIGHER than %d ( Score = %d ) \n", answer, score ) ;
                if ( answer < min ) {
                    min = min ;
                } else {
                    min = answer + 1 ;
                } // end if else
                
            } else {
                score = score - 10 ;
                printf( "Sorry, the winning number is LOWER than %d ( Score = %d ) \n", answer, score ) ;
                if ( answer > max ) {
                    max = max ;
                } else {
                    max = answer - 1 ;
                } // end if else
            } // end if else

            if ( score <= 0 ) {
                printf( "Game over!" ) ;
                return 1 ;
            } // end if
        } // end while
    } // end while

    return 0 ;
} //end function
