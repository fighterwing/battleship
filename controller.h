/* SUMMARY
 * The game is driven from here. The initialize function creates the entities
 * and calls the place_ship function for each commander. The primary game logic
 * is in the play function. Each player takes turns attacking until a condition is met.
 */
static void place_ships( void );

extern void initialize( void );
extern void play( void );
