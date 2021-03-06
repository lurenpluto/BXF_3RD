//////////////////////////////////////////////////////////////////////////////
// Name:        SVGGlyphRefElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_GLYPH_REF_ELEMENT_H
#define WX_SVG_GLYPH_REF_ELEMENT_H

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGStylable.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGGlyphRefElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGStylable
{
  protected:
    std::wstring m_glyphRef;
    std::wstring m_format;
    double m_x;
    double m_y;
    double m_dx;
    double m_dy;

  public:
    inline const std::wstring& GetGlyphRef() const { return m_glyphRef; }
    inline void SetGlyphRef(const std::wstring& n) { m_glyphRef = n; }

    inline const std::wstring& GetFormat() const { return m_format; }
    inline void SetFormat(const std::wstring& n) { m_format = n; }

    inline double GetX() const { return m_x; }
    inline void SetX(double n) { m_x = n; }

    inline double GetY() const { return m_y; }
    inline void SetY(double n) { m_y = n; }

    inline double GetDx() const { return m_dx; }
    inline void SetDx(double n) { m_dx = n; }

    inline double GetDy() const { return m_dy; }
    inline void SetDy(double n) { m_dy = n; }

  public:
    wxSVGGlyphRefElement(std::wstring tagName = _T("glyphRef")):
      wxSVGElement(tagName), m_x(0), m_y(0), m_dx(0), m_dy(0) {}
    virtual ~wxSVGGlyphRefElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGGlyphRefElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_GLYPHREF_ELEMENT; }
};

#endif // WX_SVG_GLYPH_REF_ELEMENT_H
