#include "i2c.h"
#include "mcpxxxx.h"

int main() {
    Mcpxxxx rick = Mcpxxxx(0, 0x54);
    Mcpxxxx morty = Mcpxxxx(1, 0x45);

    morty.get_state(0);
    rick.set_state(0, 4);
    return 0;
}