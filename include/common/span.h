// SPDX-License-Identifier: Apache-2.0
//===-- wasmedge/common/span.h - Helper template of std::span -------------===//
//
// Part of the WasmEdge Project.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contents the helper template aliasing of std::span.
///
//===----------------------------------------------------------------------===//
#pragma once
#include "experimental/span.hpp"

namespace WasmEdge {

template <typename T, std::size_t N = std::dynamic_extent>
using Span = std::span<T, N>;

} // namespace WasmEdge
