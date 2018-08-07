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

struct warship {
    char * label;
    int health;
    int length;
    char * target;
    char ** loc;
};


struct cluster {
    enum cluster_p type;
    union {
    struct ship ** unit;
    struct tile *** grid;
    };
};



/* EXTERN_FUNCTIONS *****************************************************/
struct cluster * build (enum cluster_t c_type) {

};
void destroy (struct cluster * c) {

};
/* struct tilemap * radar;
 * struct tilemap * grid;
 * struct battery * navy;
 * tmap id;
 *
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
 * bombard target - target is a tilemap.
 * engage target - target is a tilemap
 *
 * order (enum command_p, struct tilemap *);
 *
 * void bombard (struct tilemap * target, char * location) {
 *    each player requires 2 tilemaps.
 *    each player requires 1 battery of warships.
 *    each player requires 1 head.
 */
