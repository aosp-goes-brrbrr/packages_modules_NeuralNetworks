// Generated from argmax_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2) {
    Execute(device, ::generated_tests::argmax_2::get_test_model());
}

TEST_F(DynamicOutputShapeTest, argmax_2) {
    Execute(device, ::generated_tests::argmax_2::get_test_model(), true);
}

TEST_F(ValidationTest, argmax_2) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, argmax_2_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, argmax_2_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_relaxed();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_relaxed) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_relaxed());
}

TEST_F(DynamicOutputShapeTest, argmax_2_relaxed) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_relaxed(), true);
}

TEST_F(ValidationTest, argmax_2_relaxed) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_relaxed());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_relaxed());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_relaxed_all_inputs_as_internal();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_relaxed_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, argmax_2_relaxed_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_relaxed_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, argmax_2_relaxed_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_relaxed_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_relaxed_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_float16();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_float16) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_float16());
}

TEST_F(DynamicOutputShapeTest, argmax_2_float16) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_float16(), true);
}

TEST_F(ValidationTest, argmax_2_float16) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_float16());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_float16());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_float16_all_inputs_as_internal();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_float16_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, argmax_2_float16_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_float16_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, argmax_2_float16_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_float16_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_float16_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_int32();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_int32) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_int32());
}

TEST_F(DynamicOutputShapeTest, argmax_2_int32) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_int32(), true);
}

TEST_F(ValidationTest, argmax_2_int32) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_int32());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_int32());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_quant8();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_quant8) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_quant8());
}

TEST_F(DynamicOutputShapeTest, argmax_2_quant8) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_quant8(), true);
}

TEST_F(ValidationTest, argmax_2_quant8) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_quant8());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_quant8());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2


namespace generated_tests::argmax_2 {

const ::test_helper::TestModel& get_test_model_quant8_all_inputs_as_internal();

} // namespace generated_tests::argmax_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2 {

TEST_F(GeneratedTest, argmax_2_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_quant8_all_inputs_as_internal());
}

TEST_F(DynamicOutputShapeTest, argmax_2_quant8_all_inputs_as_internal) {
    Execute(device, ::generated_tests::argmax_2::get_test_model_quant8_all_inputs_as_internal(), true);
}

TEST_F(ValidationTest, argmax_2_quant8_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::argmax_2::get_test_model_quant8_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::argmax_2::get_test_model_quant8_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_2

