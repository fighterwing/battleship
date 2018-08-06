struct tile {
    enum tile_p state;
    char * code;
};

struct tilemap {
    int t_id;
    enum unit_p type;
    struct tile ** square;
};
/* i call functions from header files
 * header files let me access a source
 *
 * i, the player, want to bombard
 * what data needs to be accessed?
 * enemies tilemap, the enemies warship
 *
 * i, the player, want to engage
 * what data needs to be accessed?
 * my tilemap, my warship(s)
 *
 * i, the warship, want to phrase
 * what data is required?
 * something that says "warship"
 * something that says "what" to phrase
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
