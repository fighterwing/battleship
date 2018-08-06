/* FUNCTIONS
 * build_object   : Initializes an object based on the enum obj_type given.
 * destroy_object : Accept an enum obj_type and frees the given object.
 *
 * STRUCTS
 * unit      : Unit has boat data that is loaded into a commanders fleet.
 * tile      : Tile is a component of a commanders grid. Tiles are loaded into the commanders grid array.
 * commander : Commander is the player. He owns a fleet of units and has a grid of tiles. In combat he uses his strike attack.
 * judge     : Judge talks to the program user through text and tells the canvas what to draw.
 *
 * VARIABLES
 * obj       : enum obj_type passes into build_object and tells it what to build.
 * judicator : There is only one judge in the game. He will interact with the program user/canvas across source files.
 */

#ifndef ENTITIES_H
#define ENTITIES_H
#include <stdbool.h>

const extern enum obj_type { HUMAN, CPU, JUDGE, FLEET, GRID } obj;
extern struct judge * judicator;

extern void build_object( int );
extern void destroy_object( int );

struct unit;
struct tile;
struct commander;
struct judge;

#endif /* ENTITIES_H */
