#ifndef STD_H
#define STD_H

#include <stdio.h>
#include <stdlib.h>

#endif

#include "controller.h"

int main( int argc, const char ** argv )
{

    initialize();
    play();

    printf( "\npress enter to exit..." );
    getchar();
    exit( EXIT_SUCCESS );
}

