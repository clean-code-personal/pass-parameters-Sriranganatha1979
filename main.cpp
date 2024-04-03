#include "pass.h"
#include <iostream>

int main() {
    Image* image = new Image();
    image->rows = 512;
    image->columns = 512;
	std::cout << "Brightening a 512 x 512 image\n";
    ImageBrightener brightener(*image);
    int attenuatedCount = brightener.BrightenWholeImage();
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
}
