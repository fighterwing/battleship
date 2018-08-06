#define GRID_ROWS 12
#define GRID_COLS 12
#define NUM_U 6

#include "entities.h"

#include <stdio.h>

static void build_grid( void );
static void build_fleet( void );
static void build_commander( void );
static void build_judge( void );

const char * unit_names[ NUM_U ] =
{
"Aircraft Carrier",
"Battleship",
"Cruiser",
"Destroyer",
"Patrol Boat",
"Spy Vessel",
};

struct unit {
    char ** name;
    char *** grid_loc;
    char *** hit_loc;
    int length;
    bool sunk;
};

struct tile {
    char ** grid_code;
    bool occupied;
    bool hit;
};

struct commander {
    char ** name;
    char ** strike;
    struct unit ** fleet;
    struct tile *** grid;
};

struct judge {
    void ( *say )( int );
    void ( *display)( void );
};

static void build_grid( void ) {

}

void build_object( int o_type ) {
    struct unit u;
}

void destroy_object( int o_type ) {
    struct commander c;
}
