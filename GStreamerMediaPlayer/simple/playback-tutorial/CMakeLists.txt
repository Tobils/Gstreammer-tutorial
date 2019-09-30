cmake_minimum_required(VERSION 3.7)

SET(CMAKE_CXX_STANDARD 11)

project(Gst)
#set(CROSS_COMPILING_ROOT /opt/gcc-linaro-6.3.1-2017.05-x86_64_arm-linux-gnueabihf)
#set(CMAKE_C_COMPILER /opt/gcc-linaro-6.3.1-2017.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc)
#set(CMAKE_CXX_COMPILER /opt/gcc-linaro-6.3.1-2017.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-g++)

set(SOURCE_FILE
    src/playback-tutorial-1.c
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
ADD_EXECUTABLE(${PROJECT_NAME} ${SOURCE_FILE})


# secara manual menempatkan file include dan mencari manual ke directory link library
include_directories(include)

# load library gst
target_link_libraries(${PROJECT_NAME}
    "/usr/lib/x86_64-linux-gnu/libgstapp-1.0.so"
    "/usr/lib/x86_64-linux-gnu/libgstbase-1.0.so"
    "/usr/lib/x86_64-linux-gnu/libgstreamer-1.0.so"
    "/usr/lib/x86_64-linux-gnu/libgobject-2.0.so"
    "/usr/lib/x86_64-linux-gnu/libglib-2.0.so"
)

# compile manually
# gcc playback-tutorial-1.c -o playback-tutorial-1 `pkg-config --cflags --libs gstreamer-1.0`