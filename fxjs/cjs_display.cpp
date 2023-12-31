// Copyright 2017 The PDFium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "fxjs/cjs_display.h"

const JSConstSpec CJS_Display::ConstSpecs[] = {
    {"visible", JSConstSpec::Number, 0, nullptr},
    {"hidden", JSConstSpec::Number, 1, nullptr},
    {"noPrint", JSConstSpec::Number, 2, nullptr},
    {"noView", JSConstSpec::Number, 3, nullptr}};

uint32_t CJS_Display::ObjDefnID = 0;

// static
void CJS_Display::DefineJSObjects(CFXJS_Engine* pEngine) {
  ObjDefnID =
      pEngine->DefineObj("display", FXJSOBJTYPE_STATIC, nullptr, nullptr);
  DefineConsts(pEngine, ObjDefnID, ConstSpecs);
}
