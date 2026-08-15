include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

file(GLOB TEST_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/test_*.cpp")

foreach(TEST_FILE ${TEST_SOURCES})
    # Extract filename without path and extension (e.g., test_quick_sort)
    get_filename_component(TEST_NAME ${TEST_FILE} NAME_WE)

    # Create an executable for each individual test file
    add_executable(${TEST_NAME} ${TEST_FILE})

    target_link_libraries(${TEST_NAME}
        PRIVATE
            r_algo
            GTest::gtest_main
    )

    # Register with CTest runner
    gtest_discover_tests(${TEST_NAME})
endforeach()