#include "core.h"
#include <stdio.h>

static void fleet_morph( void );
static void grid_morph( void );
static void com_morph( void );
static void judge_morph( void );

const char * unit_names[ NUM_U ] =
{
"Aircraft Carrier",
"Battleship",
"Cruiser",
"Destroyer",
"Patrol Boat",
"Spy Vessel",
};

static void fleet_morph( void ) {

}
static void grid_morph( void ) {

}
void morph( int ) {

}

void relay( void ) {

}

struct unit {
    int state;
    char ** code;
};

struct cluster {
    int form;
    struct unit ** u;
    char ** label:
};

struct commander {
    struct cluster ** fleet;
    struct cluster * grid;
};
