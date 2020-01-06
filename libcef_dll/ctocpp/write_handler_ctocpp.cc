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
// $hash=2bfd1cc54d7b868f98a7c8d90f2d243e438f468f$
//

#include "libcef_dll/ctocpp/write_handler_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
size_t CefWriteHandlerCToCpp::Write(const void* ptr, size_t size, size_t n) {
  shutdown_checker::AssertNotShutdown();

  cef_write_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, write))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: ptr; type: simple_byaddr
  DCHECK(ptr);
  if (!ptr)
    return 0;

  // Execute
  size_t _retval = _struct->write(_struct, ptr, size, n);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefWriteHandlerCToCpp::Seek(int64 offset, int whence) {
  shutdown_checker::AssertNotShutdown();

  cef_write_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, seek))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->seek(_struct, offset, whence);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int64 CefWriteHandlerCToCpp::Tell() {
  shutdown_checker::AssertNotShutdown();

  cef_write_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, tell))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = _struct->tell(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int CefWriteHandlerCToCpp::Flush() {
  shutdown_checker::AssertNotShutdown();

  cef_write_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, flush))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->flush(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") bool CefWriteHandlerCToCpp::MayBlock() {
  shutdown_checker::AssertNotShutdown();

  cef_write_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, may_block))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->may_block(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefWriteHandlerCToCpp::CefWriteHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefWriteHandlerCToCpp::~CefWriteHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_write_handler_t*
CefCToCppRefCounted<CefWriteHandlerCToCpp,
                    CefWriteHandler,
                    cef_write_handler_t>::UnwrapDerived(CefWrapperType type,
                                                        CefWriteHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCToCppRefCounted<CefWriteHandlerCToCpp,
                                   CefWriteHandler,
                                   cef_write_handler_t>::kWrapperType =
    WT_WRITE_HANDLER;
