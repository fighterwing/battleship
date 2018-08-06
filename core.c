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
void build_fleet( int ) {

}

void build_fleet( int ) {

}

void relay( void ) {

}

void beacon( void ) {

}

struct tile {
    int state;
    char ** code;
};

struct unit {
    char ** label;
    struct tile ** t;
};

struct cluster {
    int type;
    char ** label:
    union {
        struct unit ** u;
        struct tile ** t;
    };
};

struct commander {
    struct cluster ** fleet;
    struct cluster * grid;
};
