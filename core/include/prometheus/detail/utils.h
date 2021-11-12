#pragma once

#include <cstddef>
#include <map>
#include <string>

#include "prometheus/detail/core_export.h"

namespace prometheus {
namespace detail {

/// \brief Label hasher for use in STL containers.
struct PROMETHEUS_CPP_CORE_EXPORT LabelHasher {
  /// \brief Compute the hash value of a map of labels.
  ///
  /// \param labels The map that will be computed the hash value.
  ///
  /// \returns The hash value of the given labels.
  std::size_t operator()(
      const std::map<std::string, std::string>& labels) const;
};

}  // namespace detail
}  // namespace prometheus
