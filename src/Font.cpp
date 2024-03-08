#include "CECT/Font.h"

namespace CECT
{
    Font::Font()
    {
    }

    Font::~Font()
    {
        for (std::size_t i = 0; i < m_Glyphs.size(); ++i)
        {
            delete m_Glyphs[i];
        }
    }
}