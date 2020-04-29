#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <stdlib.h>

#include "i2cDriverHelper.h"

#include "sparkx_alpha_led_display.h" //Click here to get the library: http://librarymanager/All#Alphanumeric_Display by SparkFun
HT16K33 display;

int main()
{
    I2CDriver i2CDriver;
    if (display.begin(i2CDriver) == false)
    {
        std::cerr << "Device did not acknowledge! Freezing." << std::endl;
        while (1);
    }
    std::cerr << "Display acknowledged." << std::endl;

    const String disp = "Milk";
    display.print(disp);
}