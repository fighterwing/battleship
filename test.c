#include "test.h"
#include <stdlib.h>
enum cmd {TEST, ENG, BOM};

struct test {
    enum cmd mine;
};
struct test * build (void) {
    struct test * the = malloc (sizeof(*the));
    the->mine = BOM;
    return the;
}
