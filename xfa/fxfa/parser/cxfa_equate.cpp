// Copyright 2017 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "xfa/fxfa/parser/cxfa_equate.h"

#include <memory>

#include "fxjs/xfa/cjx_node.h"

namespace {

const CXFA_Node::AttributeData kEquateAttributeData[] = {
    {XFA_Attribute::To, XFA_AttributeType::CData, nullptr},
    {XFA_Attribute::Force, XFA_AttributeType::Boolean, nullptr},
    {XFA_Attribute::Desc, XFA_AttributeType::CData, nullptr},
    {XFA_Attribute::From, XFA_AttributeType::CData, nullptr},
    {XFA_Attribute::Lock, XFA_AttributeType::Integer, (void*)0},
};

}  // namespace

CXFA_Equate::CXFA_Equate(CXFA_Document* doc, XFA_PacketType packet)
    : CXFA_Node(doc,
                packet,
                XFA_XDPPACKET_Config,
                XFA_ObjectType::NodeV,
                XFA_Element::Equate,
                {},
                kEquateAttributeData,
                std::make_unique<CJX_Node>(this)) {}

CXFA_Equate::~CXFA_Equate() = default;