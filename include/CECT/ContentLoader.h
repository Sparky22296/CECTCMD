#ifndef CECT_CONTENTLOADER_H_
#define CECT_CONTENTLOADER_H_

#define FONT_FILE_HEADER "CECT-FONT-FILE 1.0.0"

#include "CECT/Font.h"

namespace CECT
{
    class ContentLoader
    {
    private:

        static std::size_t GetFontSerialSize(Font* font);

    public:

        static Font* LoadFont(const char* fontPath, std::uint32_t fontSize);
        static void CreateFontFile(Font* font, const char* fileName);
    };
}

#endif