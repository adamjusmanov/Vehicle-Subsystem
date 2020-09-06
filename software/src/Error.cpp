#include "Error.hpp"
#include "config.hpp"
#include <Arduino.h>
#include <cstdint>

uint8_t LED[3] = {DEBUG_LED_0, DEBUG_LED_1, DEBUG_LED_2};

int Error::init()
{
    return 0;
}

void Error::clear(errcode_t ec)
{
}

void Error::display(errcode_t ec, errtype_t type)
{

}

void Error::summary()
{
}