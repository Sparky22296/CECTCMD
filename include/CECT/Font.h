#ifndef CECT_FONT_H_
#define CECT_FONT_H_

#include <cstdint>
#include <vector>

namespace CECT
{
    class Glyph
    {
    public:
        std::uint8_t* Data;

        std::uint32_t ASCIICode;
        std::uint32_t Width, Height;
        std::int32_t BearingX, BearingY;
        std::int32_t Advance;

        inline Glyph(std::uint32_t asciiCode, std::uint32_t width, std::uint32_t height, std::uint32_t bearingX, std::uint32_t bearingY, std::uint32_t advance) 
            : ASCIICode(asciiCode), Width(width), Height(height), BearingX(bearingX), BearingY(bearingY), Advance(advance), Data(nullptr) { }
        inline ~Glyph() { if (Data != nullptr) delete[] Data; }
    };

    class Font
    {
    private:

        std::vector<Glyph*> m_Glyphs;

    public:

        Font();
        ~Font();

        inline void AddGlyph(Glyph* glyph) { m_Glyphs.push_back(glyph); }

        inline std::vector<Glyph*> GetGlyphs() { return m_Glyphs; }
    };
}

#endif