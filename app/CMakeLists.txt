# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -fexceptions -frtti ")
set(CMAKE_VERBOSE_MAKEFILE on)

#Google protobuf路径

aux_source_directory( ./src/main/cpp/include INCLUDE )
aux_source_directory( ./src/main/cpp/include/proto PROTO_FILE )
aux_source_directory( ./src/main/cpp/libs/google/protobuf PROTOBUF )
aux_source_directory( ./src/main/cpp/libs/google/protobuf/io PROTOBUFIO )
aux_source_directory( ./src/main/cpp/libs/google/protobuf/stubs PROTOBUFSTUBS )
aux_source_directory( ./src/main/cpp/libs/google/protobuf/stubs/internal PROTOBUFSTUBSINTERNAL )

add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.cpp
             src/main/cpp/NativeSocket.cpp
              ${INCLUDE}
              ${PROTOBUF}
              ${PROTOBUFIO}
              ${PROTOBUFSTUBS}
              ${PROTOBUFSTUBSINTERNAL}
              ${PROTO_FILE}
              )

#配置加载native依赖
include_directories(
                     src/main/cpp/include
                    src/main/cpp/
                    src/main/cpp/libs/
                    )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       native-lib

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )