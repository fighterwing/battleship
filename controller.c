#include "combat.h"
#include "controller.h"
#include "entities.h"

#include <stdio.h>

struct judge randall;

void initialize( void ) {
    build_fleet();
    build_commander();
    build_commander();
    build_map();
    engage();
}

void play( void ) {
    printf( "\nwe are in playing the game\n" );
}
