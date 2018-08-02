/* FUNCTIONS
 * build   : Builds a cluster based on the enum c_type given. Returns a cluster struct.
 * destroy : Frees a cluster from memory.
 *
 * VARIABLES
 * enum c_type  : Used with build/destroy functions and cluster structs.
 * enum t_state : Used with a tile struct to define its current state.
 *
 * STRUCTS
 * tile    : Is identified by a string code and a t_state enum.
 * ship    : Is an array of tiles with a length and a label.
 * cluster : Is an array of either tiles or ships with a c_type enum.
 */

#ifndef CLUSTER_H
#define CLUSTER_H

extern const enum cluster_t { FLEET, GRID } c_type;
extern const enum tile_s { EMPTY, FULL, DEAD } t_state;

struct tile;
struct ship;
struct cluster;

extern struct cluster * build( enum cluster_t );
extern void destroy( struct cluster * );

#endif /* CLUSTER_H */
