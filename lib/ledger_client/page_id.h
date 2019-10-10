// Copyright 2018 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef PERIDOT_LIB_LEDGER_CLIENT_PAGE_ID_H_
#define PERIDOT_LIB_LEDGER_CLIENT_PAGE_ID_H_

#include <string>

#include <fuchsia/ledger/cpp/fidl.h>

namespace modular {

// Creates a page ID from an equivalent |std::string|.
//
// Caveat: This along with |fuchsia::modular::to_string| should not be used for
// JSON serialization of arbitrary page IDs as JSON string encoding involves a
// potentially non-invertible UTF-8 encoding. Instead, use |PageIdFromBase64|
// and |PageIdToBase64|.
fuchsia::ledger::PageId MakePageId(const std::string& value);

}  // namespace modular

#endif  // PERIDOT_LIB_LEDGER_CLIENT_PAGE_ID_H_
