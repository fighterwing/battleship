/* SUMMARY: Entities will have the objects of the game. Build/destroy
 * functions for the objects are here as well. The map is made of tiles
 * and a fleet is made of units.
 */

#ifndef ENTITIES_H
#define ENTITIES_H

extern void build_fleet( void );
extern void build_map( void );
extern void build_commander( void );
extern void destroy_commander( void );
extern void destroy_map( void );

struct unit;
struct tile;
struct commander;

extern struct judge randall;
extern struct tile *** game_map;

struct unit {
    const char * name;
};

struct tile {
    
};

struct commander {
    struct unit ** fleet;
};

struct judge {
    int jud;
    float t;
};
#endif /* ENTITIES_H */
