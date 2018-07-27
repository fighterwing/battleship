
//Commander type could be a global enum or a string or something
enum type { HUMAN, CPU, JUDGE };

//The boats will have names that the canvas will print out
const char * unit_type[] = { "destroya", \
                         "aircraft carrier" };
//the game map will be a 2d array of tiles, maybe a struct * ?
struct tile * game_map[][];

struct commander {
//commander will have a fleet, hits/misses, and a type (CPU/human)
};


struct judge {
//The judge will store attack spots, maybe keep track of hits/misses
};


struct unit {
//The unit will have a length, sunken status, and maybe map location data
};


struct tile {
//Tile will have a unique number, boat status, and other stuff
};

