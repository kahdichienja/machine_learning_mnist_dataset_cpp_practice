cmake_minimum_required(VERSION 3.12)
project(YourProjectName)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DCPPHTTPLIB_OPENSSL_SUPPORT")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(api_call api_call.cpp)

find_package(OpenSSL REQUIRED)
target_link_libraries(api_call PRIVATE OpenSSL::SSL OpenSSL::Crypto)
