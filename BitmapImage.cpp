#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480), channels(3), depth(8) {
    buffer = new int[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg" || fileExt == "png" || fileExt == "bmp" || fileExt == "jpeg") {
        // load image file
        // decompress into buffer
        //gestione della depth
        return true;
    }
    return false;
}

BitmapImage::~BitmapImage() {
    delete[] buffer;
}

bool BitmapImage::save(std::string name) {
    //do something...
    return false;
}

void BitmapImage::resize(int width, int height) {
    if (width > 0)
        this->width = width;
    if (height > 0)
        this->height = height;
    //resize...
}
