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
    rick.begin(rick_directions);

    rick.set_state(1, 0);
    std::cout << (int)rick.get_state(1) << std::endl;
    rick.set_state(1, 1);
    std::cout << (int)rick.get_state(1) << std::endl;

    rick.set_state(8, 0);
    std::cout << (int)rick.get_state(8) << std::endl;
    rick.set_state(8, 1);
    std::cout << (int)rick.get_state(8) << std::endl;

    /* Set some more pin states or something idk */

    return 0;
}