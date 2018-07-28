#ifndef STD_H
#define STD_H

#include <stdio.h>
#include <stdlib.h>

#endif

static void place_ships( void ) {
    printf( "\ninside place ships\n" );
}

void play( void ) {
    printf( "\nwe are in play cycle\n" );
}

void initialize( void ) {
    printf( "\nWe are in init_cycle\n" );
    place_ships();
}
