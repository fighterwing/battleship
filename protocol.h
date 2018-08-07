#ifndef PROTOCOL_H
#define PROTOCOL_H 1

enum cmd_p {ENGAGE, BOMBARD, SURRENDER, PHRASE, DRAW};
enum head_p {HUMAN, CPU};
enum tile_p {EMPTY, FULL, DEAD};
enum action_p {BOMBARD, ENGAGE, HIT, MISS, SUNK};
enum unit_p {WARSHIP, TILEMAP, HEAD};
enum target_p {T1, T2};

#endif /* PROTOCOL_H */
