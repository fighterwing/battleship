/* SUMMARY: Engage contains the logic for placing a commanders fleet on a map.
 * Attack will take input from the commander to pick a spot on the enemy map.
 * check_hit determines if the commander hit or missed.
 */

#ifndef COMBAT_H
#define COMBAT_H

static void check_hit( void );

extern void engage( void );
extern void attack( void );

#endif /* COMBAT_H */
