#include <gtest/gtest.h>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif

#include "layer1.h"
#include "layer2.h"
#include "layer3.h"

#ifdef __cplusplus
}
#endif

using std::string;

TEST(Layer1Test, HandlesNull) {
    testing::internal::CaptureStdout();
    layer1_proc(nullptr);
    string output = testing::internal::GetCapturedStdout();
    // Should at least print start message
    ASSERT_NE(output.find("start layer1 proc"), string::npos);
}

TEST(Layer2Test, ULData) {
    unsigned char buf[sizeof(layer2_msg_head)];
    layer2_msg_head *h = (layer2_msg_head*)buf;
    h->msgtype = (u8)LAYER2_MSG_TYPE_UL_DATA;
    h->length = 0;

    testing::internal::CaptureStdout();
    layer2_proc(buf);
    string output = testing::internal::GetCapturedStdout();
    ASSERT_NE(output.find("layer2 receive uplink data"), string::npos);
}

TEST(Layer2Test, DLData) {
    unsigned char buf[sizeof(layer2_msg_head)];
    layer2_msg_head *h = (layer2_msg_head*)buf;
    h->msgtype = (u8)LAYER2_MSG_TYPE_DL_DATA;
    h->length = 0;

    testing::internal::CaptureStdout();
    layer2_proc(buf);
    string output = testing::internal::GetCapturedStdout();
    ASSERT_NE(output.find("layer2 send downlink data"), string::npos);
}

TEST(Layer3Test, Basic) {
    testing::internal::CaptureStdout();
    layer3_proc();
    string output = testing::internal::GetCapturedStdout();
    ASSERT_NE(output.find("enter layer3 process"), string::npos);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
