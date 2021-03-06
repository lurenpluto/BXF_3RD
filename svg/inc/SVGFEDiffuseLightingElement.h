//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEDiffuseLightingElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_DIFFUSE_LIGHTING_ELEMENT_H
#define WX_SVG_FE_DIFFUSE_LIGHTING_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedNumber.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGFEDiffuseLightingElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  protected:
    wxSVGAnimatedString m_in1;
    wxSVGAnimatedNumber m_surfaceScale;
    wxSVGAnimatedNumber m_diffuseConstant;

  public:
    inline const wxSVGAnimatedString& GetIn1() const { return m_in1; }
    inline void SetIn1(const wxSVGAnimatedString& n) { m_in1 = n; }
    inline void SetIn1(const std::wstring& n) { m_in1.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetSurfaceScale() const { return m_surfaceScale; }
    inline void SetSurfaceScale(const wxSVGAnimatedNumber& n) { m_surfaceScale = n; }
    inline void SetSurfaceScale(float n) { m_surfaceScale.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetDiffuseConstant() const { return m_diffuseConstant; }
    inline void SetDiffuseConstant(const wxSVGAnimatedNumber& n) { m_diffuseConstant = n; }
    inline void SetDiffuseConstant(float n) { m_diffuseConstant.SetBaseVal(n); }

  public:
    wxSVGFEDiffuseLightingElement(std::wstring tagName = _T("feDiffuseLighting")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFEDiffuseLightingElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGFEDiffuseLightingElement(*this); }
    bool HasAttribute(const std::wstring& name);
    std::wstring GetAttribute(const std::wstring& name);
    bool SetAttribute(const std::wstring& name, const std::wstring& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_FEDIFFUSELIGHTING_ELEMENT; }
};

#endif // WX_SVG_FE_DIFFUSE_LIGHTING_ELEMENT_H
