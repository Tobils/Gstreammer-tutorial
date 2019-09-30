add_definitions("-DACSDK_LOG_MODULE=mediaPlayer")
add_library(MediaPlayer SHARED
    AttachmentReaderSource.cpp
    BaseStreamSource.cpp
    ErrorTypeConversion.cpp
    IStreamSource.cpp
    MediaPlayer.cpp
    Normalizer.cpp
    OffsetManager.cpp)

target_include_directories(MediaPlayer PUBLIC
    "${MediaPlayer_SOURCE_DIR}/include"
    #"${GST_INCLUDE_DIRS}"
    "/usr/local/share/third-party/arm-linux-gnueabihf/include"
    "/usr/local/share/third-party/arm-linux-gnueabihf/include/gstreamer-1.0"
    "/usr/local/share/third-party/arm-linux-gnueabihf/include/glib-2.0"
    "/usr/local/share/third-party/arm-linux-gnueabihf/lib/glib-2.0/include"
    "${PlaylistParser_SOURCE_DIR}/include")

target_link_libraries(MediaPlayer
			"/usr/local/share/third-party/arm-linux-gnueabihf/lib/libgstapp-1.0.so"
			"/usr/local/share/third-party/arm-linux-gnueabihf/lib/libgstbase-1.0.so"
			"/usr/local/share/third-party/arm-linux-gnueabihf/lib/libgstreamer-1.0.so"
			"/usr/local/share/third-party/arm-linux-gnueabihf/lib/libgobject-2.0.so"
			"/usr/local/share/third-party/arm-linux-gnueabihf/lib/libglib-2.0.so"

			#"/usr/lib/x86_64-linux-gnu/libgstapp-1.0.so"
			#"/usr/lib/x86_64-linux-gnu/libgstbase-1.0.so"
			#"/usr/lib/x86_64-linux-gnu/libgstreamer-1.0.so"
			#"/usr/lib/x86_64-linux-gnu/libgobject-2.0.so"
			#"/usr/lib/x86_64-linux-gnu/libglib-2.0.so"
			#"${GST_LDFLAGS}"
			AVSCommon
			PlaylistParser)

# install target
asdk_install()
