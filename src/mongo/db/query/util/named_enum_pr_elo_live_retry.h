// Copyright (c) MongoDB, Inc.
// SPDX-License-Identifier: SSPL-1.0
// PR-Elo live retry: intentionally missing MSVC rescan evidence.
#pragma once

#define PR_ELO_RETRY_SELECT(_1, _2, CHOSEN, ...) CHOSEN
#define PR_ELO_RETRY_DISPATCH(...) \
    PR_ELO_RETRY_SELECT(__VA_ARGS__, PR_ELO_RETRY_NAMED, PR_ELO_RETRY_PLAIN)(__VA_ARGS__)
#define PR_ELO_RETRY_PLAIN(value) value
#define PR_ELO_RETRY_NAMED(value, display_name) value
