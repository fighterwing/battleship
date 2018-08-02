/*FUNCTIONS
 * assign  : builds a head 
 * destroy :
 *
 */




#ifndef COMMAND_H
#define COMMAND_H

extern enum const h_type { HUMAN, CPU, JUDGE } head_t;

extern struct head * assign( enum h_type );
extern void destroy( struct head * );



#endif /* COMMAND_H */
