//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFontFaceFormatElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FONT_FACE_FORMAT_ELEMENT_H
#define WX_SVG_FONT_FACE_FORMAT_ELEMENT_H

#include "SVGElement.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGFontFaceFormatElement:
  public wxSVGElement
{
  public:
    wxSVGFontFaceFormatElement(std::wstring tagName = _T("font-face-format")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFontFaceFormatElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGFontFaceFormatElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_FONT_FACE_FORMAT_ELEMENT; }
};

#endif // WX_SVG_FONT_FACE_FORMAT_ELEMENT_H
