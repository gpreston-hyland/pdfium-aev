// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FXFA_CXFA_FWLTHEME_H_
#define XFA_FXFA_CXFA_FWLTHEME_H_

#include <memory>

#include "xfa/fwl/ifwl_themeprovider.h"

class CFDE_TextOut;
class CXFA_FFApp;
class CXFA_FFDoc;

class CXFA_FWLTheme final : public IFWL_ThemeProvider {
 public:
  explicit CXFA_FWLTheme(CXFA_FFApp* pApp);
  ~CXFA_FWLTheme() override;

  bool LoadCalendarFont(CXFA_FFDoc* doc);

  // IFWL_ThemeProvider:
  void DrawBackground(const CFWL_ThemeBackground& pParams) override;
  void DrawText(const CFWL_ThemeText& pParams) override;
  void CalcTextRect(const CFWL_ThemeText& pParams, CFX_RectF* pRect) override;
  float GetCXBorderSize() const override;
  float GetCYBorderSize() const override;
  CFX_RectF GetUIMargin(const CFWL_ThemePart& pThemePart) const override;
  float GetFontSize(const CFWL_ThemePart& pThemePart) const override;
  RetainPtr<CFGAS_GEFont> GetFont(
      const CFWL_ThemePart& pThemePart) const override;
  float GetLineHeight(const CFWL_ThemePart& pThemePart) const override;
  float GetScrollBarWidth() const override;
  FX_COLORREF GetTextColor(const CFWL_ThemePart& pThemePart) const override;
  CFX_SizeF GetSpaceAboveBelow(const CFWL_ThemePart& pThemePart) const override;

 private:
  std::unique_ptr<CFDE_TextOut> m_pTextOut;
  RetainPtr<CFGAS_GEFont> m_pCalendarFont;
  WideString m_wsResource;
  UnownedPtr<CXFA_FFApp> const m_pApp;
  CFX_RectF m_Rect;
};

#endif  // XFA_FXFA_CXFA_FWLTHEME_H_
