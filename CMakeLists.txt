cmake_minimum_required(VERSION 3.17)
project(hash_table)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()


add_executable(workflow_fact main.cpp  Workwflow/Block/WriteFile.cpp Workwflow/Block/WriteFile.h Workwflow/Block/ReadFile.cpp Workwflow/Block/ReadFile.h Workwflow/Block/Grep.cpp Workwflow/Block/Grep.h Workwflow/Block/Dump.cpp Workwflow/Block/Dump.h Workwflow/Block/Sort.cpp Workwflow/Block/Sort.h Workwflow/Block/Replace.cpp Workwflow/Block/Replace.h Workwflow/Block/Count.cpp Workwflow/Block/Count.h Workwflow/Block/Worker.cpp Workwflow/Block/Worker.h Workwflow/ConfigR.cpp Workwflow/ConfigR.h Workwflow/Workflow.cpp Workwflow/Workflow.h Workwflow/Block/Factory.cpp Workwflow/Block/Factory.h)
add_executable(CMakeTest Workflowtest.cpp)

target_link_libraries(CMakeTest gtest_main)