#include <stdio.h>
#include <stdlib.h>

#include "controller.h"

int main( int argc, const char ** argv )
{
    initialize();
    play();

    printf( "\npress enter to exit..." );
    getchar();
    exit( EXIT_SUCCESS );
}

