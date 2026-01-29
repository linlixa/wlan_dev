cmake_minimum_required(VERSION 3.15)
project(wlan_tests C CXX)

# Use modern C++ for tests
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable CTest for this subdirectory (defensive  root also enables it)
enable_testing()

# Test sources
set(TEST_SRC
    test_layers.cpp
)

add_executable(test_layers ${TEST_SRC})



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
