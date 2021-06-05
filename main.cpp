#include <iostream>
#include "i2c.h"
#include "mcpxxxx.h"

int main() {
    Mcpxxxx rick = Mcpxxxx(0, 0x54);
    Mcpxxxx morty = Mcpxxxx(1, 0x45);

    morty.begin();
    rick.begin();

    std::cout << rick.get_state(0) << "\n";
    morty.set_state(8, 1);
    std::cout << rick.get_state(8) << "\n";

    return 0;
}