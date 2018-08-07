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
#define CLUSTER_H 1

#include "protocol.h"

struct tile;
struct ship;
struct cluster;

extern struct cluster * build (enum cluster_p);
extern void destroy (struct cluster *);
extern void relay (struct * warship, enum command_p);

extern void phrase (enum action_p, struct warship *);
extern void update (struct warship *, 

extern void bombard (void);
extern void engage (void);

#endif /* CLUSTER_H */
