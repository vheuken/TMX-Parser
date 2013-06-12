find_package (Boost COMPONENTS unit_test_framework REQUIRED)

set ( TEST_FILES
      TMXMap_test.cpp
)

add_executable(tests ${TEST_FILES})

target_link_libraries(tests ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(tests tests)