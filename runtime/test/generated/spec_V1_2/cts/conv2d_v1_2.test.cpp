// Generated from conv2d_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "TestGenerated.h"

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc(Model *model);
bool is_ignored_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc) {
    execute(CreateModel_nhwc,
            is_ignored_nhwc,
            get_examples_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc, generated_tests::conv2d_v1_2::CreateModel_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_dynamic_output_shape) {
    execute(CreateModel_nhwc_dynamic_output_shape,
            is_ignored_nhwc_dynamic_output_shape,
            get_examples_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_inputs_as_internal,
            is_ignored_nhwc_all_inputs_as_internal,
            get_examples_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_all_tensors_as_inputs,
            is_ignored_nhwc_all_tensors_as_inputs,
            get_examples_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nhwc_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed(Model *model);
bool is_ignored_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed) {
    execute(CreateModel_nhwc_relaxed,
            is_ignored_nhwc_relaxed,
            get_examples_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_dynamic_output_shape,
            is_ignored_nhwc_relaxed_dynamic_output_shape,
            get_examples_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_nhwc_relaxed_all_inputs_as_internal,
            get_examples_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8(Model *model);
bool is_ignored_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8) {
    execute(CreateModel_nhwc_quant8,
            is_ignored_nhwc_quant8,
            get_examples_nhwc_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_dynamic_output_shape,
            is_ignored_nhwc_quant8_dynamic_output_shape,
            get_examples_nhwc_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal,
            is_ignored_nhwc_quant8_all_inputs_as_internal,
            get_examples_nhwc_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs,
            is_ignored_nhwc_quant8_all_tensors_as_inputs,
            get_examples_nhwc_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8(Model *model);
bool is_ignored_nhwc_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8) {
    execute(CreateModel_nhwc_channelQuant8,
            is_ignored_nhwc_channelQuant8,
            get_examples_nhwc_channelQuant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_channelQuant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape) {
    execute(CreateModel_nhwc_channelQuant8_dynamic_output_shape,
            is_ignored_nhwc_channelQuant8_dynamic_output_shape,
            get_examples_nhwc_channelQuant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal) {
    execute(CreateModel_nhwc_channelQuant8_all_inputs_as_internal,
            is_ignored_nhwc_channelQuant8_all_inputs_as_internal,
            get_examples_nhwc_channelQuant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16(Model *model);
bool is_ignored_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16) {
    execute(CreateModel_nhwc_float16,
            is_ignored_nhwc_float16,
            get_examples_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_dynamic_output_shape,
            is_ignored_nhwc_float16_dynamic_output_shape,
            get_examples_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal,
            is_ignored_nhwc_float16_all_inputs_as_internal,
            get_examples_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs,
            is_ignored_nhwc_float16_all_tensors_as_inputs,
            get_examples_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw(Model *model);
bool is_ignored_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_nchw) {
    execute(CreateModel_nchw,
            is_ignored_nchw,
            get_examples_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw, generated_tests::conv2d_v1_2::CreateModel_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_dynamic_output_shape(Model *model);
bool is_ignored_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_dynamic_output_shape) {
    execute(CreateModel_nchw_dynamic_output_shape,
            is_ignored_nchw_dynamic_output_shape,
            get_examples_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_inputs_as_internal,
            is_ignored_nchw_all_inputs_as_internal,
            get_examples_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_all_tensors_as_inputs) {
    execute(CreateModel_nchw_all_tensors_as_inputs,
            is_ignored_nchw_all_tensors_as_inputs,
            get_examples_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nchw_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed(Model *model);
bool is_ignored_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed) {
    execute(CreateModel_nchw_relaxed,
            is_ignored_nchw_relaxed,
            get_examples_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_dynamic_output_shape,
            is_ignored_nchw_relaxed_dynamic_output_shape,
            get_examples_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal,
            is_ignored_nchw_relaxed_all_inputs_as_internal,
            get_examples_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_nchw_relaxed_all_tensors_as_inputs,
            get_examples_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8(Model *model);
bool is_ignored_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8) {
    execute(CreateModel_nchw_quant8,
            is_ignored_nchw_quant8,
            get_examples_nchw_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_dynamic_output_shape,
            is_ignored_nchw_quant8_dynamic_output_shape,
            get_examples_nchw_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal,
            is_ignored_nchw_quant8_all_inputs_as_internal,
            get_examples_nchw_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs,
            is_ignored_nchw_quant8_all_tensors_as_inputs,
            get_examples_nchw_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8(Model *model);
bool is_ignored_nchw_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8) {
    execute(CreateModel_nchw_channelQuant8,
            is_ignored_nchw_channelQuant8,
            get_examples_nchw_channelQuant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_dynamic_output_shape(Model *model);
bool is_ignored_nchw_channelQuant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape) {
    execute(CreateModel_nchw_channelQuant8_dynamic_output_shape,
            is_ignored_nchw_channelQuant8_dynamic_output_shape,
            get_examples_nchw_channelQuant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal) {
    execute(CreateModel_nchw_channelQuant8_all_inputs_as_internal,
            is_ignored_nchw_channelQuant8_all_inputs_as_internal,
            get_examples_nchw_channelQuant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16(Model *model);
bool is_ignored_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16) {
    execute(CreateModel_nchw_float16,
            is_ignored_nchw_float16,
            get_examples_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_dynamic_output_shape,
            is_ignored_nchw_float16_dynamic_output_shape,
            get_examples_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal,
            is_ignored_nchw_float16_all_inputs_as_internal,
            get_examples_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs,
            is_ignored_nchw_float16_all_tensors_as_inputs,
            get_examples_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_2(Model *model);
bool is_ignored_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_2) {
    execute(CreateModel_nhwc_2,
            is_ignored_nhwc_2,
            get_examples_nhwc_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_dynamic_output_shape_2,
            is_ignored_nhwc_dynamic_output_shape_2,
            get_examples_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_all_inputs_as_internal_2,
            is_ignored_nhwc_all_inputs_as_internal_2,
            get_examples_nhwc_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_all_tensors_as_inputs_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_2,
            is_ignored_nhwc_all_tensors_as_inputs_2,
            get_examples_nhwc_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_2(Model *model);
bool is_ignored_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed_2) {
    execute(CreateModel_nhwc_relaxed_2,
            is_ignored_nhwc_relaxed_2,
            get_examples_nhwc_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_relaxed_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_dynamic_output_shape_2,
            get_examples_nhwc_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_2,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_2,
            get_examples_nhwc_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_2,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_2(Model *model);
bool is_ignored_nhwc_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8_2) {
    execute(CreateModel_nhwc_quant8_2,
            is_ignored_nhwc_quant8_2,
            get_examples_nhwc_quant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_quant8_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_dynamic_output_shape_2,
            get_examples_nhwc_quant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_2,
            is_ignored_nhwc_quant8_all_inputs_as_internal_2,
            get_examples_nhwc_quant8_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_2) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_2,
            get_examples_nhwc_quant8_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_2(Model *model);
bool is_ignored_nhwc_channelQuant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8_2) {
    execute(CreateModel_nhwc_channelQuant8_2,
            is_ignored_nhwc_channelQuant8_2,
            get_examples_nhwc_channelQuant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_channelQuant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_channelQuant8_dynamic_output_shape_2,
            is_ignored_nhwc_channelQuant8_dynamic_output_shape_2,
            get_examples_nhwc_channelQuant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_channelQuant8_all_inputs_as_internal_2,
            is_ignored_nhwc_channelQuant8_all_inputs_as_internal_2,
            get_examples_nhwc_channelQuant8_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_2,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_2,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_2(Model *model);
bool is_ignored_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16_2) {
    execute(CreateModel_nhwc_float16_2,
            is_ignored_nhwc_float16_2,
            get_examples_nhwc_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_float16_dynamic_output_shape_2,
            is_ignored_nhwc_float16_dynamic_output_shape_2,
            get_examples_nhwc_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_2,
            is_ignored_nhwc_float16_all_inputs_as_internal_2,
            get_examples_nhwc_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_2,
            get_examples_nhwc_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_2(Model *model);
bool is_ignored_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_2) {
    execute(CreateModel_nchw_2,
            is_ignored_nchw_2,
            get_examples_nchw_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_2, generated_tests::conv2d_v1_2::CreateModel_nchw_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_dynamic_output_shape_2) {
    execute(CreateModel_nchw_dynamic_output_shape_2,
            is_ignored_nchw_dynamic_output_shape_2,
            get_examples_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_all_inputs_as_internal_2,
            is_ignored_nchw_all_inputs_as_internal_2,
            get_examples_nchw_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_all_tensors_as_inputs_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_2,
            is_ignored_nchw_all_tensors_as_inputs_2,
            get_examples_nchw_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nchw_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_2(Model *model);
bool is_ignored_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed_2) {
    execute(CreateModel_nchw_relaxed_2,
            is_ignored_nchw_relaxed_2,
            get_examples_nchw_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_nchw_relaxed_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_dynamic_output_shape_2,
            get_examples_nchw_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_2,
            is_ignored_nchw_relaxed_all_inputs_as_internal_2,
            get_examples_nchw_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_2,
            get_examples_nchw_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_2(Model *model);
bool is_ignored_nchw_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8_2) {
    execute(CreateModel_nchw_quant8_2,
            is_ignored_nchw_quant8_2,
            get_examples_nchw_quant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8_2, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_dynamic_output_shape_2) {
    execute(CreateModel_nchw_quant8_dynamic_output_shape_2,
            is_ignored_nchw_quant8_dynamic_output_shape_2,
            get_examples_nchw_quant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_2,
            is_ignored_nchw_quant8_all_inputs_as_internal_2,
            get_examples_nchw_quant8_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_2) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_2,
            get_examples_nchw_quant8_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_2(Model *model);
bool is_ignored_nchw_channelQuant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8_2) {
    execute(CreateModel_nchw_channelQuant8_2,
            is_ignored_nchw_channelQuant8_2,
            get_examples_nchw_channelQuant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8_2, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_channelQuant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_dynamic_output_shape_2) {
    execute(CreateModel_nchw_channelQuant8_dynamic_output_shape_2,
            is_ignored_nchw_channelQuant8_dynamic_output_shape_2,
            get_examples_nchw_channelQuant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_channelQuant8_all_inputs_as_internal_2,
            is_ignored_nchw_channelQuant8_all_inputs_as_internal_2,
            get_examples_nchw_channelQuant8_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_2) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs_2,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs_2,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_2(Model *model);
bool is_ignored_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16_2) {
    execute(CreateModel_nchw_float16_2,
            is_ignored_nchw_float16_2,
            get_examples_nchw_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16_2, generated_tests::conv2d_v1_2::CreateModel_nchw_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_dynamic_output_shape_2) {
    execute(CreateModel_nchw_float16_dynamic_output_shape_2,
            is_ignored_nchw_float16_dynamic_output_shape_2,
            get_examples_nchw_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_2,
            is_ignored_nchw_float16_all_inputs_as_internal_2,
            get_examples_nchw_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_2,
            get_examples_nchw_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_nchw_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc(Model *model);
bool is_ignored_channel_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc) {
    execute(CreateModel_channel_nhwc,
            is_ignored_channel_nhwc,
            get_examples_channel_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_dynamic_output_shape,
            is_ignored_channel_nhwc_dynamic_output_shape,
            get_examples_channel_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_all_inputs_as_internal,
            is_ignored_channel_nhwc_all_inputs_as_internal,
            get_examples_channel_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_channel_nhwc_all_tensors_as_inputs,
            is_ignored_channel_nhwc_all_tensors_as_inputs,
            get_examples_channel_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed(Model *model);
bool is_ignored_channel_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_relaxed) {
    execute(CreateModel_channel_nhwc_relaxed,
            is_ignored_channel_nhwc_relaxed,
            get_examples_channel_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_relaxed_dynamic_output_shape,
            is_ignored_channel_nhwc_relaxed_dynamic_output_shape,
            get_examples_channel_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_channel_nhwc_relaxed_all_inputs_as_internal,
            get_examples_channel_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_channel_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8(Model *model);
bool is_ignored_channel_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_quant8) {
    execute(CreateModel_channel_nhwc_quant8,
            is_ignored_channel_nhwc_quant8,
            get_examples_channel_nhwc_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_quant8, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_quant8_dynamic_output_shape,
            is_ignored_channel_nhwc_quant8_dynamic_output_shape,
            get_examples_channel_nhwc_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_quant8_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_quant8_all_inputs_as_internal,
            is_ignored_channel_nhwc_quant8_all_inputs_as_internal,
            get_examples_channel_nhwc_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_quant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_quant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs) {
    execute(CreateModel_channel_nhwc_quant8_all_tensors_as_inputs,
            is_ignored_channel_nhwc_quant8_all_tensors_as_inputs,
            get_examples_channel_nhwc_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_quant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8(Model *model);
bool is_ignored_channel_nhwc_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_channelQuant8) {
    execute(CreateModel_channel_nhwc_channelQuant8,
            is_ignored_channel_nhwc_channelQuant8,
            get_examples_channel_nhwc_channelQuant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_channelQuant8, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_channelQuant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_channelQuant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_channelQuant8_dynamic_output_shape,
            is_ignored_channel_nhwc_channelQuant8_dynamic_output_shape,
            get_examples_channel_nhwc_channelQuant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_channelQuant8_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_channelQuant8_all_inputs_as_internal,
            is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal,
            get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_channelQuant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_channelQuant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs) {
    execute(CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs,
            is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs,
            get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16(Model *model);
bool is_ignored_channel_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_float16) {
    execute(CreateModel_channel_nhwc_float16,
            is_ignored_channel_nhwc_float16,
            get_examples_channel_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_float16_dynamic_output_shape,
            is_ignored_channel_nhwc_float16_dynamic_output_shape,
            get_examples_channel_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_float16_all_inputs_as_internal,
            is_ignored_channel_nhwc_float16_all_inputs_as_internal,
            get_examples_channel_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_channel_nhwc_float16_all_tensors_as_inputs,
            is_ignored_channel_nhwc_float16_all_tensors_as_inputs,
            get_examples_channel_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw(Model *model);
bool is_ignored_channel_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw) {
    execute(CreateModel_channel_nchw,
            is_ignored_channel_nchw,
            get_examples_channel_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw, generated_tests::conv2d_v1_2::CreateModel_channel_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_dynamic_output_shape,
            is_ignored_channel_nchw_dynamic_output_shape,
            get_examples_channel_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_all_inputs_as_internal,
            is_ignored_channel_nchw_all_inputs_as_internal,
            get_examples_channel_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_all_tensors_as_inputs) {
    execute(CreateModel_channel_nchw_all_tensors_as_inputs,
            is_ignored_channel_nchw_all_tensors_as_inputs,
            get_examples_channel_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed(Model *model);
bool is_ignored_channel_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_relaxed) {
    execute(CreateModel_channel_nchw_relaxed,
            is_ignored_channel_nchw_relaxed,
            get_examples_channel_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_relaxed_dynamic_output_shape,
            is_ignored_channel_nchw_relaxed_dynamic_output_shape,
            get_examples_channel_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_relaxed_all_inputs_as_internal,
            is_ignored_channel_nchw_relaxed_all_inputs_as_internal,
            get_examples_channel_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_channel_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_channel_nchw_relaxed_all_tensors_as_inputs,
            get_examples_channel_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8(Model *model);
bool is_ignored_channel_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_quant8) {
    execute(CreateModel_channel_nchw_quant8,
            is_ignored_channel_nchw_quant8,
            get_examples_channel_nchw_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_quant8, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_quant8_dynamic_output_shape,
            is_ignored_channel_nchw_quant8_dynamic_output_shape,
            get_examples_channel_nchw_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_quant8_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_quant8_all_inputs_as_internal,
            is_ignored_channel_nchw_quant8_all_inputs_as_internal,
            get_examples_channel_nchw_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_quant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_quant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs) {
    execute(CreateModel_channel_nchw_quant8_all_tensors_as_inputs,
            is_ignored_channel_nchw_quant8_all_tensors_as_inputs,
            get_examples_channel_nchw_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_quant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8(Model *model);
bool is_ignored_channel_nchw_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_channelQuant8) {
    execute(CreateModel_channel_nchw_channelQuant8,
            is_ignored_channel_nchw_channelQuant8,
            get_examples_channel_nchw_channelQuant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_channelQuant8, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_channelQuant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_channelQuant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_channelQuant8_dynamic_output_shape,
            is_ignored_channel_nchw_channelQuant8_dynamic_output_shape,
            get_examples_channel_nchw_channelQuant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_channelQuant8_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_channelQuant8_all_inputs_as_internal,
            is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal,
            get_examples_channel_nchw_channelQuant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_channelQuant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_channelQuant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs) {
    execute(CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs,
            is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs,
            get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16(Model *model);
bool is_ignored_channel_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_float16) {
    execute(CreateModel_channel_nchw_float16,
            is_ignored_channel_nchw_float16,
            get_examples_channel_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_float16_dynamic_output_shape,
            is_ignored_channel_nchw_float16_dynamic_output_shape,
            get_examples_channel_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_float16_all_inputs_as_internal,
            is_ignored_channel_nchw_float16_all_inputs_as_internal,
            get_examples_channel_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_channel_nchw_float16_all_tensors_as_inputs,
            is_ignored_channel_nchw_float16_all_tensors_as_inputs,
            get_examples_channel_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_channel_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_channel_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc(Model *model);
bool is_ignored_large_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc) {
    execute(CreateModel_large_nhwc,
            is_ignored_large_nhwc,
            get_examples_large_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc, generated_tests::conv2d_v1_2::CreateModel_large_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_dynamic_output_shape,
            is_ignored_large_nhwc_dynamic_output_shape,
            get_examples_large_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_all_inputs_as_internal,
            is_ignored_large_nhwc_all_inputs_as_internal,
            get_examples_large_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_large_nhwc_all_tensors_as_inputs,
            is_ignored_large_nhwc_all_tensors_as_inputs,
            get_examples_large_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed(Model *model);
bool is_ignored_large_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_relaxed) {
    execute(CreateModel_large_nhwc_relaxed,
            is_ignored_large_nhwc_relaxed,
            get_examples_large_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_relaxed_dynamic_output_shape,
            is_ignored_large_nhwc_relaxed_dynamic_output_shape,
            get_examples_large_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_large_nhwc_relaxed_all_inputs_as_internal,
            get_examples_large_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_large_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_large_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_large_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8(Model *model);
bool is_ignored_large_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_quant8) {
    execute(CreateModel_large_nhwc_quant8,
            is_ignored_large_nhwc_quant8,
            get_examples_large_nhwc_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_quant8, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_quant8_dynamic_output_shape,
            is_ignored_large_nhwc_quant8_dynamic_output_shape,
            get_examples_large_nhwc_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_quant8_all_inputs_as_internal,
            is_ignored_large_nhwc_quant8_all_inputs_as_internal,
            get_examples_large_nhwc_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_quant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs) {
    execute(CreateModel_large_nhwc_quant8_all_tensors_as_inputs,
            is_ignored_large_nhwc_quant8_all_tensors_as_inputs,
            get_examples_large_nhwc_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_quant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nhwc_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8(Model *model);
bool is_ignored_large_nhwc_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8) {
    execute(CreateModel_large_nhwc_channelQuant8,
            is_ignored_large_nhwc_channelQuant8,
            get_examples_large_nhwc_channelQuant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_channelQuant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_channelQuant8_dynamic_output_shape,
            is_ignored_large_nhwc_channelQuant8_dynamic_output_shape,
            get_examples_large_nhwc_channelQuant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal,
            is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal,
            get_examples_large_nhwc_channelQuant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8_2) {
    execute(CreateModel_large_nhwc_channelQuant8_2,
            is_ignored_large_nhwc_channelQuant8_2,
            get_examples_large_nhwc_channelQuant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8_2, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_dynamic_output_shape_2) {
    execute(CreateModel_large_nhwc_channelQuant8_dynamic_output_shape_2,
            is_ignored_large_nhwc_channelQuant8_dynamic_output_shape_2,
            get_examples_large_nhwc_channelQuant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_2) {
    execute(CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal_2,
            is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_2,
            get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_large_nhwc_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_2) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_2,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_2,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_large_nhwc_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16(Model *model);
bool is_ignored_large_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_float16) {
    execute(CreateModel_large_nhwc_float16,
            is_ignored_large_nhwc_float16,
            get_examples_large_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_float16_dynamic_output_shape,
            is_ignored_large_nhwc_float16_dynamic_output_shape,
            get_examples_large_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_float16_all_inputs_as_internal,
            is_ignored_large_nhwc_float16_all_inputs_as_internal,
            get_examples_large_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_large_nhwc_float16_all_tensors_as_inputs,
            is_ignored_large_nhwc_float16_all_tensors_as_inputs,
            get_examples_large_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw(Model *model);
bool is_ignored_large_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw) {
    execute(CreateModel_large_nchw,
            is_ignored_large_nchw,
            get_examples_large_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw, generated_tests::conv2d_v1_2::CreateModel_large_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_dynamic_output_shape) {
    execute(CreateModel_large_nchw_dynamic_output_shape,
            is_ignored_large_nchw_dynamic_output_shape,
            get_examples_large_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_all_inputs_as_internal,
            is_ignored_large_nchw_all_inputs_as_internal,
            get_examples_large_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_all_tensors_as_inputs) {
    execute(CreateModel_large_nchw_all_tensors_as_inputs,
            is_ignored_large_nchw_all_tensors_as_inputs,
            get_examples_large_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nchw_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed(Model *model);
bool is_ignored_large_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_relaxed) {
    execute(CreateModel_large_nchw_relaxed,
            is_ignored_large_nchw_relaxed,
            get_examples_large_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_large_nchw_relaxed_dynamic_output_shape,
            is_ignored_large_nchw_relaxed_dynamic_output_shape,
            get_examples_large_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_relaxed_all_inputs_as_internal,
            is_ignored_large_nchw_relaxed_all_inputs_as_internal,
            get_examples_large_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_large_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_large_nchw_relaxed_all_tensors_as_inputs,
            get_examples_large_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8(Model *model);
bool is_ignored_large_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_quant8) {
    execute(CreateModel_large_nchw_quant8,
            is_ignored_large_nchw_quant8,
            get_examples_large_nchw_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_quant8, generated_tests::conv2d_v1_2::CreateModel_large_nchw_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8_dynamic_output_shape) {
    execute(CreateModel_large_nchw_quant8_dynamic_output_shape,
            is_ignored_large_nchw_quant8_dynamic_output_shape,
            get_examples_large_nchw_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_quant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_quant8_all_inputs_as_internal,
            is_ignored_large_nchw_quant8_all_inputs_as_internal,
            get_examples_large_nchw_quant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_quant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs) {
    execute(CreateModel_large_nchw_quant8_all_tensors_as_inputs,
            is_ignored_large_nchw_quant8_all_tensors_as_inputs,
            get_examples_large_nchw_quant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nchw_quant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nchw_quant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8(Model *model);
bool is_ignored_large_nchw_channelQuant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8) {
    execute(CreateModel_large_nchw_channelQuant8,
            is_ignored_large_nchw_channelQuant8,
            get_examples_large_nchw_channelQuant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_channelQuant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_dynamic_output_shape) {
    execute(CreateModel_large_nchw_channelQuant8_dynamic_output_shape,
            is_ignored_large_nchw_channelQuant8_dynamic_output_shape,
            get_examples_large_nchw_channelQuant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_channelQuant8_all_inputs_as_internal,
            is_ignored_large_nchw_channelQuant8_all_inputs_as_internal,
            get_examples_large_nchw_channelQuant8_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8_2) {
    execute(CreateModel_large_nchw_channelQuant8_2,
            is_ignored_large_nchw_channelQuant8_2,
            get_examples_large_nchw_channelQuant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8_2, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_dynamic_output_shape_2) {
    execute(CreateModel_large_nchw_channelQuant8_dynamic_output_shape_2,
            is_ignored_large_nchw_channelQuant8_dynamic_output_shape_2,
            get_examples_large_nchw_channelQuant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_inputs_as_internal_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_2) {
    execute(CreateModel_large_nchw_channelQuant8_all_inputs_as_internal_2,
            is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_2,
            get_examples_large_nchw_channelQuant8_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_large_nchw_channelQuant8_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_2) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_2,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_2,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_large_nchw_channelQuant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16(Model *model);
bool is_ignored_large_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_float16) {
    execute(CreateModel_large_nchw_float16,
            is_ignored_large_nchw_float16,
            get_examples_large_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_large_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_large_nchw_float16_dynamic_output_shape,
            is_ignored_large_nchw_float16_dynamic_output_shape,
            get_examples_large_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_float16_all_inputs_as_internal,
            is_ignored_large_nchw_float16_all_inputs_as_internal,
            get_examples_large_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_large_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_large_nchw_float16_all_tensors_as_inputs,
            is_ignored_large_nchw_float16_all_tensors_as_inputs,
            get_examples_large_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_large_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_large_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_large_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc) {
    execute(CreateModel_1_H3_W2_SAME_nhwc,
            is_ignored_1_H3_W2_SAME_nhwc,
            get_examples_1_H3_W2_SAME_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed,
            get_examples_1_H3_W2_SAME_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16,
            is_ignored_1_H3_W2_SAME_nhwc_float16,
            get_examples_1_H3_W2_SAME_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw) {
    execute(CreateModel_1_H3_W2_SAME_nchw,
            is_ignored_1_H3_W2_SAME_nchw,
            get_examples_1_H3_W2_SAME_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed,
            is_ignored_1_H3_W2_SAME_nchw_relaxed,
            get_examples_1_H3_W2_SAME_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16,
            is_ignored_1_H3_W2_SAME_nchw_float16,
            get_examples_1_H3_W2_SAME_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_float16_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_2,
            is_ignored_1_H3_W2_SAME_nhwc_2,
            get_examples_1_H3_W2_SAME_nhwc_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_2,
            is_ignored_1_H3_W2_SAME_nchw_2,
            get_examples_1_H3_W2_SAME_nchw_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_2,
            get_examples_1_H3_W2_SAME_nchw_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc) {
    execute(CreateModel_1_H3_W2_VALID_nhwc,
            is_ignored_1_H3_W2_VALID_nhwc,
            get_examples_1_H3_W2_VALID_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed,
            get_examples_1_H3_W2_VALID_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16,
            is_ignored_1_H3_W2_VALID_nhwc_float16,
            get_examples_1_H3_W2_VALID_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw) {
    execute(CreateModel_1_H3_W2_VALID_nchw,
            is_ignored_1_H3_W2_VALID_nchw,
            get_examples_1_H3_W2_VALID_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed,
            is_ignored_1_H3_W2_VALID_nchw_relaxed,
            get_examples_1_H3_W2_VALID_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16,
            is_ignored_1_H3_W2_VALID_nchw_float16,
            get_examples_1_H3_W2_VALID_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_float16_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_2,
            is_ignored_1_H3_W2_VALID_nhwc_2,
            get_examples_1_H3_W2_VALID_nhwc_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_2,
            is_ignored_1_H3_W2_VALID_nchw_2,
            get_examples_1_H3_W2_VALID_nchw_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_2,
            get_examples_1_H3_W2_VALID_nchw_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_1_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc) {
    execute(CreateModel_3_H3_W2_SAME_nhwc,
            is_ignored_3_H3_W2_SAME_nhwc,
            get_examples_3_H3_W2_SAME_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed,
            get_examples_3_H3_W2_SAME_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16,
            is_ignored_3_H3_W2_SAME_nhwc_float16,
            get_examples_3_H3_W2_SAME_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw) {
    execute(CreateModel_3_H3_W2_SAME_nchw,
            is_ignored_3_H3_W2_SAME_nchw,
            get_examples_3_H3_W2_SAME_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed,
            is_ignored_3_H3_W2_SAME_nchw_relaxed,
            get_examples_3_H3_W2_SAME_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16,
            is_ignored_3_H3_W2_SAME_nchw_float16,
            get_examples_3_H3_W2_SAME_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_float16_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_2,
            is_ignored_3_H3_W2_SAME_nhwc_2,
            get_examples_3_H3_W2_SAME_nhwc_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_2,
            is_ignored_3_H3_W2_SAME_nchw_2,
            get_examples_3_H3_W2_SAME_nchw_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_2,
            get_examples_3_H3_W2_SAME_nchw_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_SAME_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc) {
    execute(CreateModel_3_H3_W2_VALID_nhwc,
            is_ignored_3_H3_W2_VALID_nhwc,
            get_examples_3_H3_W2_VALID_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed,
            get_examples_3_H3_W2_VALID_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16,
            is_ignored_3_H3_W2_VALID_nhwc_float16,
            get_examples_3_H3_W2_VALID_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw) {
    execute(CreateModel_3_H3_W2_VALID_nchw,
            is_ignored_3_H3_W2_VALID_nchw,
            get_examples_3_H3_W2_VALID_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed,
            is_ignored_3_H3_W2_VALID_nchw_relaxed,
            get_examples_3_H3_W2_VALID_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16,
            is_ignored_3_H3_W2_VALID_nchw_float16,
            get_examples_3_H3_W2_VALID_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_float16_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_2,
            is_ignored_3_H3_W2_VALID_nhwc_2,
            get_examples_3_H3_W2_VALID_nhwc_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nhwc_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_2,
            is_ignored_3_H3_W2_VALID_nchw_2,
            get_examples_3_H3_W2_VALID_nchw_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_2,
            get_examples_3_H3_W2_VALID_nchw_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2();

TEST_F(GeneratedTests, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2, generated_tests::conv2d_v1_2::CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(Model *model);
bool is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
    execute(CreateModel_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            is_ignored_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
            get_examples_3_H3_W2_VALID_nchw_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1(Model *model);
bool is_ignored_quant_output_multiplier_gt_1(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1) {
    execute(CreateModel_quant_output_multiplier_gt_1,
            is_ignored_quant_output_multiplier_gt_1,
            get_examples_quant_output_multiplier_gt_1());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_quant_output_multiplier_gt_1, generated_tests::conv2d_v1_2::CreateModel_quant_output_multiplier_gt_1)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_all_inputs_as_internal(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal) {
    execute(CreateModel_quant_output_multiplier_gt_1_all_inputs_as_internal,
            is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal,
            get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_quant_output_multiplier_gt_1_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs) {
    execute(CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs,
            is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs,
            get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs, generated_tests::conv2d_v1_2::CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal, generated_tests::conv2d_v1_2::CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed,
            is_ignored_quant_output_multiplier_gt_1_relaxed,
            get_examples_quant_output_multiplier_gt_1_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal,
            is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal,
            get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_relaxed_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs,
            is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs,
            get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

TEST_F(GeneratedTests, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
            get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(Model *model);
bool is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
    execute(CreateModel_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            is_ignored_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
            get_examples_quant_output_multiplier_gt_1_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc(Model *model);
bool is_ignored_zero_sized_nhwc(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc) {
    execute(CreateModel_zero_sized_nhwc,
            is_ignored_zero_sized_nhwc,
            get_examples_zero_sized_nhwc());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nhwc, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nhwc)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nhwc_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nhwc_dynamic_output_shape,
            is_ignored_zero_sized_nhwc_dynamic_output_shape,
            get_examples_zero_sized_nhwc_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed(Model *model);
bool is_ignored_zero_sized_nhwc_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc_relaxed) {
    execute(CreateModel_zero_sized_nhwc_relaxed,
            is_ignored_zero_sized_nhwc_relaxed,
            get_examples_zero_sized_nhwc_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_relaxed_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape,
            is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape,
            get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_quant8(Model *model);
bool is_ignored_zero_sized_nhwc_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc_quant8) {
    execute(CreateModel_zero_sized_nhwc_quant8,
            is_ignored_zero_sized_nhwc_quant8,
            get_examples_zero_sized_nhwc_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nhwc_quant8, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nhwc_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_quant8_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape,
            is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape,
            get_examples_zero_sized_nhwc_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_float16(Model *model);
bool is_ignored_zero_sized_nhwc_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc_float16) {
    execute(CreateModel_zero_sized_nhwc_float16,
            is_ignored_zero_sized_nhwc_float16,
            get_examples_zero_sized_nhwc_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nhwc_float16, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nhwc_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_float16_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nhwc_float16_dynamic_output_shape,
            is_ignored_zero_sized_nhwc_float16_dynamic_output_shape,
            get_examples_zero_sized_nhwc_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw(Model *model);
bool is_ignored_zero_sized_nchw(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw) {
    execute(CreateModel_zero_sized_nchw,
            is_ignored_zero_sized_nchw,
            get_examples_zero_sized_nchw());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nchw, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nchw)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nchw_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nchw_dynamic_output_shape,
            is_ignored_zero_sized_nchw_dynamic_output_shape,
            get_examples_zero_sized_nchw_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_relaxed(Model *model);
bool is_ignored_zero_sized_nchw_relaxed(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw_relaxed) {
    execute(CreateModel_zero_sized_nchw_relaxed,
            is_ignored_zero_sized_nchw_relaxed,
            get_examples_zero_sized_nchw_relaxed());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_relaxed_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape,
            is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape,
            get_examples_zero_sized_nchw_relaxed_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_quant8(Model *model);
bool is_ignored_zero_sized_nchw_quant8(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw_quant8) {
    execute(CreateModel_zero_sized_nchw_quant8,
            is_ignored_zero_sized_nchw_quant8,
            get_examples_zero_sized_nchw_quant8());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nchw_quant8, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nchw_quant8)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_quant8_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nchw_quant8_dynamic_output_shape,
            is_ignored_zero_sized_nchw_quant8_dynamic_output_shape,
            get_examples_zero_sized_nchw_quant8_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_float16(Model *model);
bool is_ignored_zero_sized_nchw_float16(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw_float16) {
    execute(CreateModel_zero_sized_nchw_float16,
            is_ignored_zero_sized_nchw_float16,
            get_examples_zero_sized_nchw_float16());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nchw_float16, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nchw_float16)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape(Model *model);
bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_dynamic_output_shape();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_float16_dynamic_output_shape) {
    execute(CreateModel_zero_sized_nchw_float16_dynamic_output_shape,
            is_ignored_zero_sized_nchw_float16_dynamic_output_shape,
            get_examples_zero_sized_nchw_float16_dynamic_output_shape());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_2(Model *model);
bool is_ignored_zero_sized_nhwc_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc_2) {
    execute(CreateModel_zero_sized_nhwc_2,
            is_ignored_zero_sized_nhwc_2,
            get_examples_zero_sized_nhwc_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nhwc_2, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nhwc_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nhwc_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nhwc_dynamic_output_shape_2,
            is_ignored_zero_sized_nhwc_dynamic_output_shape_2,
            get_examples_zero_sized_nhwc_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_2(Model *model);
bool is_ignored_zero_sized_nhwc_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc_relaxed_2) {
    execute(CreateModel_zero_sized_nhwc_relaxed_2,
            is_ignored_zero_sized_nhwc_relaxed_2,
            get_examples_zero_sized_nhwc_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2,
            is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2,
            get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_2(Model *model);
bool is_ignored_zero_sized_nhwc_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc_quant8_2) {
    execute(CreateModel_zero_sized_nhwc_quant8_2,
            is_ignored_zero_sized_nhwc_quant8_2,
            get_examples_zero_sized_nhwc_quant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nhwc_quant8_2, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nhwc_quant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_quant8_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nhwc_quant8_dynamic_output_shape_2,
            is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2,
            get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_float16_2(Model *model);
bool is_ignored_zero_sized_nhwc_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nhwc_float16_2) {
    execute(CreateModel_zero_sized_nhwc_float16_2,
            is_ignored_zero_sized_nhwc_float16_2,
            get_examples_zero_sized_nhwc_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nhwc_float16_2, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nhwc_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nhwc_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nhwc_float16_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nhwc_float16_dynamic_output_shape_2,
            is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2,
            get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_2(Model *model);
bool is_ignored_zero_sized_nchw_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw_2) {
    execute(CreateModel_zero_sized_nchw_2,
            is_ignored_zero_sized_nchw_2,
            get_examples_zero_sized_nchw_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nchw_2, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nchw_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nchw_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nchw_dynamic_output_shape_2,
            is_ignored_zero_sized_nchw_dynamic_output_shape_2,
            get_examples_zero_sized_nchw_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_2(Model *model);
bool is_ignored_zero_sized_nchw_relaxed_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw_relaxed_2) {
    execute(CreateModel_zero_sized_nchw_relaxed_2,
            is_ignored_zero_sized_nchw_relaxed_2,
            get_examples_zero_sized_nchw_relaxed_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_relaxed_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nchw_relaxed_dynamic_output_shape_2,
            is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2,
            get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_quant8_2(Model *model);
bool is_ignored_zero_sized_nchw_quant8_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw_quant8_2) {
    execute(CreateModel_zero_sized_nchw_quant8_2,
            is_ignored_zero_sized_nchw_quant8_2,
            get_examples_zero_sized_nchw_quant8_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nchw_quant8_2, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nchw_quant8_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_quant8_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_quant8_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nchw_quant8_dynamic_output_shape_2,
            is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2,
            get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_float16_2(Model *model);
bool is_ignored_zero_sized_nchw_float16_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_2();

TEST_F(GeneratedTests, conv2d_v1_2_zero_sized_nchw_float16_2) {
    execute(CreateModel_zero_sized_nchw_float16_2,
            is_ignored_zero_sized_nchw_float16_2,
            get_examples_zero_sized_nchw_float16_2());
}

} // namespace generated_tests::conv2d_v1_2
TEST_AVAILABLE_SINCE(V1_2, conv2d_v1_2_zero_sized_nchw_float16_2, generated_tests::conv2d_v1_2::CreateModel_zero_sized_nchw_float16_2)

namespace generated_tests::conv2d_v1_2 {

void CreateModel_zero_sized_nchw_float16_dynamic_output_shape_2(Model *model);
bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2(int);
std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_dynamic_output_shape_2();

TEST_F(DynamicOutputShapeTest, conv2d_v1_2_zero_sized_nchw_float16_dynamic_output_shape_2) {
    execute(CreateModel_zero_sized_nchw_float16_dynamic_output_shape_2,
            is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2,
            get_examples_zero_sized_nchw_float16_dynamic_output_shape_2());
}

} // namespace generated_tests::conv2d_v1_2
