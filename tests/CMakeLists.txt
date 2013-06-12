set ( TEST_FILES
      TMXMap_test.cpp
)

if (UNIX)
    ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK) 
endif()

add_executable(tests ${TEST_FILES})

target_link_libraries(tests ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

add_test(tests tests)