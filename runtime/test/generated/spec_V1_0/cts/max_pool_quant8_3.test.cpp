// Generated from max_pool_quant8_3.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"


namespace generated_tests::max_pool_quant8_3 {

const ::test_helper::TestModel& get_test_model();

TEST_F(GeneratedTests, max_pool_quant8_3) { execute(get_test_model()); }

TEST_F(DynamicOutputShapeTest, max_pool_quant8_3) { execute(get_test_model()); }

} // namespace generated_tests::max_pool_quant8_3

TEST_AVAILABLE_SINCE(V1_0, max_pool_quant8_3, generated_tests::max_pool_quant8_3::get_test_model());


namespace generated_tests::max_pool_quant8_3 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

TEST_F(GeneratedTests, max_pool_quant8_3_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

TEST_F(DynamicOutputShapeTest, max_pool_quant8_3_all_inputs_as_internal) { execute(get_test_model_all_inputs_as_internal()); }

} // namespace generated_tests::max_pool_quant8_3

TEST_AVAILABLE_SINCE(V1_0, max_pool_quant8_3_all_inputs_as_internal, generated_tests::max_pool_quant8_3::get_test_model_all_inputs_as_internal());

