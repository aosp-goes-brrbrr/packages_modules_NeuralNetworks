// clang-format off
// Generated file (from: space_to_batch_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace space_to_batch_quant8_2 {
// Generated space_to_batch_quant8_2 test
#include "generated/examples/space_to_batch_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/space_to_batch_quant8_2.model.cpp"
} // namespace space_to_batch_quant8_2

TEST_F(GeneratedTests, space_to_batch_quant8_2) {
    execute(space_to_batch_quant8_2::CreateModel,
            space_to_batch_quant8_2::is_ignored,
            space_to_batch_quant8_2::get_examples());
}

#if 0
TEST_F(DynamicOutputShapeTests, space_to_batch_quant8_2_dynamic_output_shape) {
    execute(space_to_batch_quant8_2::CreateModel_dynamic_output_shape,
            space_to_batch_quant8_2::is_ignored_dynamic_output_shape,
            space_to_batch_quant8_2::get_examples_dynamic_output_shape());
}

#endif
