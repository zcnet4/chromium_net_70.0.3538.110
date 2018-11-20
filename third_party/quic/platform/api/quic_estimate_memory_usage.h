// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_THIRD_PARTY_QUIC_PLATFORM_API_QUIC_ESTIMATE_MEMORY_USAGE_H_
#define NET_THIRD_PARTY_QUIC_PLATFORM_API_QUIC_ESTIMATE_MEMORY_USAGE_H_

#include <cstddef>

#include "net/third_party/quic/platform/impl/quic_estimate_memory_usage_impl.h"

namespace quic {

template <class T>
size_t QuicEstimateMemoryUsage(const T& object) {
  return QuicEstimateMemoryUsageImpl(object);
}

}  // namespace quic

#endif  // NET_THIRD_PARTY_QUIC_PLATFORM_API_QUIC_ESTIMATE_MEMORY_USAGE_H_
