// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/base/platform_mime_util.h"

#include <string>

#include "base/logging.h"
#include "build/build_config.h"

namespace net {

bool PlatformMimeUtil::GetPlatformMimeTypeFromExtension(
    const base::FilePath::StringType& extension,
    std::string* result) const {
  // TODO(fuchsia): Integrate with MIME DB when Fuchsia provides an API.
  return false;
}

bool PlatformMimeUtil::GetPlatformPreferredExtensionForMimeType(
    const std::string& mime_type,
    base::FilePath::StringType* extension) const {
  // TODO(fuchsia): Integrate with MIME DB when Fuchsia provides an API.
  return false;
}

void PlatformMimeUtil::GetPlatformExtensionsForMimeType(
    const std::string& mime_type,
    std::unordered_set<base::FilePath::StringType>* extensions) const {
  // TODO(fuchsia): Integrate with MIME DB when Fuchsia provides an API.
}

}  // namespace net
