# 收集当前模块源文件,注意.表示的就是当前目录
aux_source_directory(./src LAYER2_SRC)

# 创建模块库（静态或动态）
add_library(layer2 STATIC ${LAYER2_SRC})

# 设置模块的头文件路径
target_include_directories(layer2 PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ../common/include
)

# 模块特定的编译选项
#target_compile_options(layer2 PRIVATE -Wall -Wextra)


# 打印配置信息
message(STATUS "===============STATIC LIB=========================")
message(STATUS "Project: ${PROJECT_NAME} v${PROJECT_VERSION}")

message("COMMON_SRC = ${COMMON_SRC}")
message("CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_CURRENT_BINARY_DIR = ${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS "===============STATIC LIB=========================")