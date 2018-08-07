struct tile {
    enum tile_p state;
    char * code;
};

struct tilemap {
    int t_id;
    struct tile ** square;
};

struct battery {
    int TARGET;
};


/* i call functions from header files
 * header files let me access a source
 *
 * i, the player, want to bombard
 * what data needs to be accessed?
 * enemies tilemap, the enemies warship
 *
 * head has func command()
 * command takes cmd_p, a head, and a coord
 * (lets say its bombard, "A4" player1)
 * head sees bombard command, so call something, and send one of its values
 * // IRL, commanders order ships to attack a location
 *
 * head calls phrase (BOMBARD, HEAD, char * label) func.
 * head calls warship order(sends his info) func with a specific coord
 *
 * warship has a tilemap as its TARGET
 * warship calls a phrase (BOMBARD, WARSHIP, char * label) func.
 * warship calls a tilemap strike () func with warship TARGET
 *
 * target checks tilemap, then must update it
 * target returns a result (HIT, MISS, SUNK)
 * warship calls phrase (HIT/MISS/SUNK)
 *
 * i, the player, want to engage
 * what data needs to be accessed?
 * my tilemap, my warship(s)
 *
 * i, the warship, want to phrase
 * what data is required?
 * something that says "warship" (enum warship)
 * something that says "what" to phrase (enum action)
 * something that says "phrase"
 *
 * "what" to phrase. a code of some kind. who owns it?
 * warship owns phrase code, yes.
 * 
 * what do i phrase?
 * attacking, hit, miss, sinking, engage
 * com1->battery[0]
 *
 * head has an order
 * head and his order are sent to relay()
 * relay is the hub that processes commands
 * if it's bombard command
 */
