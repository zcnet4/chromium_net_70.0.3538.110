// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_SSL_SSL_KEY_LOGGER_IMPL_H_
#define NET_SSL_SSL_KEY_LOGGER_IMPL_H_

#include <memory>
#include <string>

#include "base/macros.h"
#include "base/memory/ref_counted.h"
#include "net/base/net_export.h"
#include "net/ssl/ssl_key_logger.h"

namespace base {
class FilePath;
class SequencedTaskRunner;
}  // namespace base

namespace net {

// SSLKeyLoggerImpl is the file-based implementation of the SSLKeyLogger
// interface.
class NET_EXPORT SSLKeyLoggerImpl : public SSLKeyLogger {
 public:
  // Creates a new SSLKeyLoggerImpl which writes to |path|, scheduling write
  // operations in the background.
  explicit SSLKeyLoggerImpl(const base::FilePath& path);
  ~SSLKeyLoggerImpl() override;

  void WriteLine(const std::string& line) override;

 private:
  class Core;

  scoped_refptr<base::SequencedTaskRunner> task_runner_;
  // Destroyed on |task_runner_|.
  std::unique_ptr<Core> core_;

  DISALLOW_COPY_AND_ASSIGN(SSLKeyLoggerImpl);
};

}  // namespace net

#endif  // NET_SSL_SSL_KEY_LOGGER_IMPL_H_
