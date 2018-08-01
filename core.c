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

struct unit {
    int state;
    char ** code;
    char ** label:
};

struct cluster {
    int form;
    int length;
    struct unit ** u;
};

struct commander {
    struct cluster ** fleet;
    struct cluster * grid;
};
