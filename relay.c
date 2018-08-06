#include "command.h"

static char *** build_codes (void);

struct head {
    enum command_p cmd;
    enum head_p type;
    char ** target;
    char *** codes;
    void (*relay) (enum command_p, char **);
};

static char *** build_codes (void) {

}
void command (enum command_p cmd, struct head * h) {

}
struct head * build (enum head_p type) {
    
}
