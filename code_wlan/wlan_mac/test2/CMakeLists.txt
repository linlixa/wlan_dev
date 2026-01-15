cmake_minimum_required(VERSION 3.15)
project(wlan_tests2 C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# Use the same test source (keeps single source file copy)
set(TEST_SRC
    ${CMAKE_CURRENT_SOURCE_DIR}/../test/test_layers.cpp
)

add_executable(wlan_mac_test_layers2 ${TEST_SRC})

target_link_libraries(wlan_mac_test_layers2 PRIVATE
    gtest_main
    layer1
    layer2
    layer3
    common
)

include(GoogleTest)
gtest_discover_tests(wlan_mac_test_layers2)
