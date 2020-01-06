// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=49e06b49baadb1a40c4b5602d9b97c969614c31e$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_v8_capi.h"
#include "include/cef_v8.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefV8HandlerCToCpp : public CefCToCppRefCounted<CefV8HandlerCToCpp,
                                                      CefV8Handler,
                                                      cef_v8handler_t> {
 public:
  CefV8HandlerCToCpp();
  virtual ~CefV8HandlerCToCpp();

  // CefV8Handler methods.
  bool Execute(const CefString& name,
               CefRefPtr<CefV8Value> object,
               const CefV8ValueList& arguments,
               CefRefPtr<CefV8Value>& retval,
               CefString& exception) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_V8HANDLER_CTOCPP_H_
