#include "command.h"
#include "cluster.h"

const enum com_c { CONTROL, ENGAGE, BOMBARD, SURRENDER } c_code;
const enum draw_c { PHRASE, DRAW } d_code;

struct head {
    enum com_c command;
    enum h_type head_t;
    char ** code;
    ( *command )( enum com_c, char ** );
};

struct head * assign( enum  ) {
    return NULL;
}
// com->grid[0][1]->code;
// com->grid[0][1]->state;
// com->fleet->unit[5]->health;
// com1->command( FLEET, code );
// com1->command( ENGAGE, code );
// unit->relay( FLEET );
// fleet->unit[0]->loc[0]->code;
// unit->loc[0]->code;
// fleet->unit->loc[2]->code;
// struct head com1;
// com1->fleet->unit[1]->loc[0]->code;
// fleet->unit[0]->length
// fleet->unit[0]->loc[1]->code;
// fleet->unit[2]->label;
// com1->fleet->unit->label
// com1->fleet->unit->loc->state

// struct head * judicator;
// com1->
// judicator->command( DRAW, code );
// judicator->command( PHRASE, code );
// commander->command( ENGAGE, code );
// commander->command( BOMBARD, char code );
/*
 * initialize heads. commanders are made. judge is made.
 * intialize clusters. grids are made. fleets are made.
 * link clusters and heads with a function pointer
 */
