set(Boost_USE_STATIC_LIBS ON)
include_directories(${Boost_INCLUDE_DIR})
find_package (Boost COMPONENTS unit_test_framework REQUIRED)

set ( TEST_FILES
      TMXMap_test.cpp
)

add_executable(tests ${TEST_FILES})

target_link_libraries(tests 
                      ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                      "TMX Parser")

add_test(tests tests)