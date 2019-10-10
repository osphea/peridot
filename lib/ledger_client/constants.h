// Copyright 2017 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef PERIDOT_LIB_LEDGER_CLIENT_CONSTANTS_H_
#define PERIDOT_LIB_LEDGER_CLIENT_CONSTANTS_H_

namespace modular {

inline constexpr char kCloudProviderFirestoreAppUrl[] =
    "fuchsia-pkg://fuchsia.com/cloud_provider_firestore#meta/"
    "cloud_provider_firestore.cmx";
inline constexpr char kLedgerAppUrl[] = "fuchsia-pkg://fuchsia.com/ledger#meta/ledger.cmx";

// Hard-coded communal Ledger instance.
inline constexpr char kFirebaseProjectId[] = "fuchsia-ledger";
inline constexpr char kFirebaseApiKey[] = "AIzaSyDzzuJILOn6riFPTXC36HlH6CEdliLapDA";

}  // namespace modular

#endif  // PERIDOT_LIB_LEDGER_CLIENT_CONSTANTS_H_
