// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_URL_PATTERN_INDEX_URL_RULE_UTIL_H_
#define COMPONENTS_URL_PATTERN_INDEX_URL_RULE_UTIL_H_

#include <string>

namespace url_pattern_index {

namespace flat {
struct UrlRule;
}

// Prints a UrlRule in string form.
std::string FlatUrlRuleToString(const flat::UrlRule* flat_rule);

}  // namespace url_pattern_index

#endif  // COMPONENTS_URL_PATTERN_INDEX_URL_RULE_UTIL_H_