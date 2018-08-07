#ifndef TILEMAP_H
#define TILEMAP_H


extern void build_tilemap (void);

//updates a tilemap square with the given state
extern void update (struct tilemap *, char *, enum tile_p);

#endif /* TILEMAP_H */
/*
 * warship array 
 * warships are assigned to tilemaps
 * warships are given a tilemap code
 * add_ws (build(warship));
 * 
 */
