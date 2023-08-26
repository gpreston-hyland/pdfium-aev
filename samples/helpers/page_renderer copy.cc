// Copyright 2023 The PDFium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "samples/helpers/page_renderer.h"

#include "public/fpdfview.h"

PageRenderer::PageRenderer(FPDF_PAGE page, int width, int height, int flags
  , bool thumbnails, std::string uniqueId  // FOR_AEV
  )
    : page_(page), width_(width), height_(height), flags_(flags) 
    , thumbnails_(thumbnails), uniqueId_(uniqueId)   // FOR_AEV
    {}

PageRenderer::~PageRenderer() = default;

bool PageRenderer::Continue() {
  return false;
}
