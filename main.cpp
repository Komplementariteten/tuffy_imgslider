#include "main.h"

using namespace pimoroni;

ST7789 st7789(PicoExplorer::WIDTH, PicoExplorer::HEIGHT, ROTATE_0, false, get_spi_pins(BG_SPI_FRONT));
PicoGraphics_PenRGB332 graphics(st7789.width, st7789.height, nullptr);

int main() {

    auto check = SLIDER4;
    for (auto  i = 0; i < SLIDER4.width; ++i) {
        for (auto j = 0; j < SLIDER4.height; ++j) {
            auto index = (i * SLIDER4.width) + j;
            auto pixel =SLIDER4.pixel[index];
            graphics.set_pen(pixel.red, pixel.green, pixel.blue);
            graphics.pixel(Point(i, j));
        }
    }
    st7789.update(&graphics);
    /* while(true) {
        // now we've done our drawing let's update the screen
    }*/
}