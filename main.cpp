#include <iostream>
#include "i2c.h"
#include "mcpxxxx.h"

int main() {
    uint8_t rick_directions[16] = 
    {
        1, 0, 1, 1, 1, 1, 0, 0,
        0, 1, 1, 1, 1, 1, 1, 1
    };

    uint8_t morty_directions[16] =
    {
        0, 0, 0, 0, 1, 1, 1, 1,
        1, 1, 0, 0, 1, 0, 1, 1
    };

    Mcpxxxx rick = Mcpxxxx(2, 0x20);
    Mcpxxxx morty = Mcpxxxx(2, 0x21);

    morty.begin(morty_directions);
    rick.begin(rick_directions);

    std::cout << rick.get_state(0) << "\n";
    morty.set_state(8, 1);
    std::cout << rick.get_state(8) << "\n";

    return 0;
}