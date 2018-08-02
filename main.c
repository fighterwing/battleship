#include <stdio.h>
#include <stdlib.h>

#include "controller.h"

const enum c_type { FLEET, GRID } c;
void funk( enum c_type );

int main( int argc, const char ** argv )
{
//    initialize();
    funk( c );



    printf( "\npress enter to exit..." );
    getchar();
    exit( EXIT_SUCCESS );
}

void funk( enum c_type c ) {

}
