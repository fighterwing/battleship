#include "combat.h"
#include "controller.h"
#include "entities.h"

#include <stdio.h>

struct judge * judicator;
struct tile *** grid;

void initialize( void ) {
    build_object( 0 );
    destroy_object( 0 );
    engage();
    play();
}

void play( void ) {
    printf( "\nwe are in playing the game\n" );
}
