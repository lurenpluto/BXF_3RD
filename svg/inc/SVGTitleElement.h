//////////////////////////////////////////////////////////////////////////////
// Name:        SVGTitleElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_TITLE_ELEMENT_H
#define WX_SVG_TITLE_ELEMENT_H

#include "SVGElement.h"
#include "SVGLangSpace.h"
#include "SVGStylable.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGTitleElement:
  public wxSVGElement,
  public wxSVGLangSpace,
  public wxSVGStylable
{
  public:
    wxSVGTitleElement(std::wstring tagName = _T("title")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGTitleElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGTitleElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_TITLE_ELEMENT; }
};

#endif // WX_SVG_TITLE_ELEMENT_H