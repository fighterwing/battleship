/* FUNCTIONS
 * build   : Builds a chief structure based on the chief protocol given.
 * command : Executes a command based on the command protocol and chief structure given.
 * destroy : Frees the chief from duty (and memory).
 *
 * STRUCTS
 * chief   : Is used to execute commands
 */

#ifndef COMMAND_H
#define COMMAND_H 1

#include "protocol.h"

struct head;

extern struct head * build (enum head_p ch);
extern void command (enum command_p, struct head *);
// extern void classify (struct warship *, struct head *);
// extern void relay (void);
extern void destroy (struct head *);

/* classify? assign? group? */

#endif /* COMMAND_H */
