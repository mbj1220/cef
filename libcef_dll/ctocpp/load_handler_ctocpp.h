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
// $hash=22460d6f937eddf1ec07dcea2325bba205101d47$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_LOAD_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_LOAD_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_load_handler_capi.h"
#include "include/cef_load_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefLoadHandlerCToCpp : public CefCToCppRefCounted<CefLoadHandlerCToCpp,
                                                        CefLoadHandler,
                                                        cef_load_handler_t> {
 public:
  CefLoadHandlerCToCpp();
  virtual ~CefLoadHandlerCToCpp();

  // CefLoadHandler methods.
  void OnLoadingStateChange(CefRefPtr<CefBrowser> browser,
                            bool isLoading,
                            bool canGoBack,
                            bool canGoForward) override;
  void OnLoadStart(CefRefPtr<CefBrowser> browser,
                   CefRefPtr<CefFrame> frame,
                   TransitionType transition_type) override;
  void OnLoadEnd(CefRefPtr<CefBrowser> browser,
                 CefRefPtr<CefFrame> frame,
                 int httpStatusCode) override;
  void OnLoadError(CefRefPtr<CefBrowser> browser,
                   CefRefPtr<CefFrame> frame,
                   ErrorCode errorCode,
                   const CefString& errorText,
                   const CefString& failedUrl) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_LOAD_HANDLER_CTOCPP_H_
