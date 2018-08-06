/* STATIC_FUNCTIONS
 * build_grid     : Builds a cluster of tiles called a grid.
 * build_fleet    : Builds a cluster of ships called a fleet.
 *
 * VARIABLES
 * F_SIZE  : The size of the fleet cluster.
 * ROWS_G  : The number rows in the grid.
 * COLS_G  : The number of columns in the grid.
 * labels  : An array of label names for each ship.
 */
#include "cluster.h"
#include <stdio.h>

#define F_SIZE 6
#define ROWS_G 8
#define COLS_G 8

static void build_grid (struct *, (*thefunk)( char, int ) );
static struct cluster * build_fleet (enum p_cluster);

const char * labels [F_SIZE+1] =
{
"Aircraft Carrier", "Battleship", "Cruiser",
"Destroyer", "Patrol Boat", "Spy Vessel",
};

/* STRUCTS **************************************************************/
struct tile {
    enum tile_p state;
    char ** code;
};

struct warship {
    char ** label;
    int health;
    int length;
    char ** loc;
};


struct cluster {
    enum cluster_p type;
    union {
    struct ship ** unit;
    struct tile *** grid;
    };
};

/* STATIC_FUNCTIONS *****************************************************/
static void build_grid( void ) {

}

static void build_fleet (void) {

}

/* EXTERN_FUNCTIONS *****************************************************/
struct cluster * build (enum cluster_t c_type) {

};
void destroy (struct cluster * c) {

};
/*
 * there are 2 grids per "player"
 * heads send commands to grids???
 * heads can see grids.
 * grid must be extended
 * grid has a type
 * warships are located on one grid
 * the other grid is the "radar"
 * a grid and a radar
 * what do grids have that let warships know where to go or attack?
 * head gives a command.
 * command is relayed to a target.
 * target(s) perform the command.
 *
 * judge gives the draw command
 * draw command is relayed to the canvas target
 * canvas performs the draw command
 *
 * bombard target - target is enemy warship.
 * engage target - target is a game grid.
 *
 * canvas target - target is a drawing (function call)
 * phrase target - target is a phrase (function call)
 *
 * command takes order and head.
 * head relays the command based on his data.
 * i.e. PHRASE command 
 * DRAW command
 * relay sends
 *
 *
 *
 *
 * head gives the command engage/bombard with a target
 * command/target is relayed (with a code?)
 * fleets use relays? canvas use relays? warships use relays?
 * to the warship target(s)
 * warship(s) perform the bombard command.
 *
 * so, warships bombard by targeting a location.
 * judge commands
 * results are relayed 
 *
 * warships have a target
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
