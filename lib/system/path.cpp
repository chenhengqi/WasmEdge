// SPDX-License-Identifier: Apache-2.0
#include "system/path.h"
#include "config.h"

#if (WASMEDGE_OS_LINUX || WASMEDGE_OS_MACOS) && HAVE_PWD_H
#include <pwd.h>
#include <unistd.h>
#endif

namespace WasmEdge {

std::filesystem::path Path::home() noexcept {
#if (WASMEDGE_OS_LINUX || WASMEDGE_OS_MACOS) && HAVE_PWD_H
  const struct passwd *PassWd = getpwuid(getuid());
  return std::filesystem::u8path(PassWd->pw_dir) / ".wasmedge/cache"sv;
#else
  return {};
#endif
}

} // namespace WasmEdge
