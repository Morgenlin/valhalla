#include "mjolnir/exitsignbuilder.h"

using namespace valhalla::baldr;

namespace valhalla {
namespace mjolnir {

// Constructor with both elements
ExitSignBuilder::ExitSignBuilder(const ExitSign::Type& type,
                                 uint32_t text_index)
    : ExitSign(type, text_index) {
}

}
}
