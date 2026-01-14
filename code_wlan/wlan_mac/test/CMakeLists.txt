cmake_minimum_required(VERSION 3.15)
project(wlan_tests C CXX)

# Use modern C++ for tests
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Test sources
set(TEST_SRC
    test_layers.cpp
)

add_executable(test_layers ${TEST_SRC})

target_include_directories(test_layers PRIVATE
    ../common/include
    ../layer1/include
    ../layer2/include
    ../layer3/include
    ../arch/include
)

# Link against googletest and project libraries
target_link_libraries(test_layers PRIVATE
    gtest_main
    layer1
    layer2
    layer3
    common
)

include(GoogleTest)
gtest_discover_tests(test_layers)
