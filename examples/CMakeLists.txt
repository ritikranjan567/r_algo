# Discover all example source files automatically
file(GLOB EXAMPLE_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

foreach(EXAMPLE_FILE ${EXAMPLE_SOURCES})
    # Extract filename without path/extension (e.g., 01_sorting_example)
    get_filename_component(EXAMPLE_NAME ${EXAMPLE_FILE} NAME_WE)

    # Create an independent executable for each example file
    add_executable(${EXAMPLE_NAME} ${EXAMPLE_FILE})
    
    # Link the header-only algo library target
    target_link_libraries(${EXAMPLE_NAME} PRIVATE r_algo)
endforeach()