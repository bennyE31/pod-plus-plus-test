#ifndef __mcp__h__
#define __mcp__h__
#include <stdint.h>
#include "i2c.h"

#define MCP_DIRA_REG    0x00
#define MCP_DIRB_REG    0x01
#define MCP_GPIOA_REG   0x12
#define MCP_GPIOB_REG   0x13

#define MCP_NUM_PINS    16

class Mcpxxxx: private I2c {
    private:
        int clear_settings();
        int set_dir(int pin, uint8_t dir);
        uint8_t get_dir(int pin);
    public:
        Mcpxxxx(int bus, int addr);
        int begin();
        uint8_t get_state(int pin);
        int set_state(int pin, uint8_t val);
};
#endif