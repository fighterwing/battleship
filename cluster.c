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

static void build_grid( void );
static void build_fleet( void );

const char * labels[ F_SIZE+1 ] =
{
"Aircraft Carrier",
"Battleship",
"Cruiser",
"Destroyer",
"Patrol Boat",
"Spy Vessel",
};

/* STRUCTS **************************************************************/
struct tile {
    enum tile_s state;
    char ** code;
};

struct ship {
    char ** label;
    int health;
};


struct cluster {
    enum cluster_t type;
    union {
    struct ship ** unit;
    struct tile *** square;
    };
};
/* END_STRUCTS **********************************************************/

/* STATIC_FUNCTIONS *****************************************************/
static void build_grid( void ) {

}

static void build_fleet( void ) {

}
/* END_STATIC_FUNCTIONS *************************************************/

/* EXTERN_FUNCTIONS *****************************************************/
struct cluster * build( enum cluster_t c_type ) {

};
void destroy( struct cluster * c ) {

};
/* END_EXTERN_FUNCTIONS *************************************************/

/*
void access( void ) {
    static int deployed = 0;
    static struct cluster * fleet;
    static struct cluster * grid;

    if( !loaded ) {
        load_clusters( fleet, grid );
        deployed = 1;
    }
}
*/
