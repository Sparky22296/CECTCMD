#include <iostream>

#include "CECT/ContentLoader.h"

int main(int argc, char** argv)
{
    CECT::Font* font = CECT::ContentLoader::LoadFont("arial.ttf", 48);
    CECT::ContentLoader::CreateFontFile(font, "penis");
    delete font;
}