/*FUNCTIONS
 * draw   : Draws a text-based graphic based on the enum draw_t given.
 * report : Prints phrases to the screen which inform the program user of events.
 * VARIABLES
 * dt     : Integer code that tells the draw function what to draw.
 * rt     : Integer code that tells the report function what to 
 */

#ifndef CANVAS_H
#define CANVAS_H

const extern enum draw_t { GRID, HIT, MISS, WIN, LOSE, PLAY, QUIT } dt;
const extern enum rep_t { THIS, THAT } rt;

void draw( int );
void report( int );

#endif /* CANVAS_H */
