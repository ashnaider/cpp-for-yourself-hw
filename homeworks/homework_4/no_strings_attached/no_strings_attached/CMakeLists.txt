add_library(string_split STATIC string_split.cpp)
add_library(string_trim STATIC string_trim.cpp)

target_link_libraries(string_split PUBLIC cxx_setup)
target_link_libraries(string_trim PUBLIC cxx_setup)

if (BUILD_TESTING)
	add_executable(string_split_test string_split_test.cpp)
	add_executable(string_trim_test string_trim_test.cpp)

	target_link_libraries(string_split_test PRIVATE GTest::gtest_main string_split cxx_setup)
	target_link_libraries(string_trim_test PRIVATE GTest::gtest_main string_trim cxx_setup)
	include(GoogleTest)
	gtest_discover_tests(string_split_test)
	gtest_discover_tests(string_trim_test)
endif()
