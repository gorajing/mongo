// Copyright (c) MongoDB, Inc.
// SPDX-License-Identifier: SSPL-1.0
// Demo-only change for the RECEIPTS persistent-review webhook.
#pragma once

#define RECEIPTS_NAMED_ENUM_SELECT(_1, _2, CHOSEN, ...) CHOSEN
#define RECEIPTS_NAMED_ENUM_DISPATCH(...) \
    RECEIPTS_NAMED_ENUM_SELECT(__VA_ARGS__, RECEIPTS_NAMED_ENUM_NAMED, RECEIPTS_NAMED_ENUM_PLAIN)(__VA_ARGS__)
#define RECEIPTS_NAMED_ENUM_PLAIN(value) value
#define RECEIPTS_NAMED_ENUM_NAMED(value, display_name) value
