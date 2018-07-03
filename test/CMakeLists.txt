if(BUILD_TESTING)
	find_package (Boost COMPONENTS unit_test_framework REQUIRED)
	
	add_executable(grasp_test test_grasp.cpp)

	set_target_properties(grasp_test PROPERTIES
		CXX_STANDARD 14
		CXX_STANDARD_REQUIRED ON
		COMPILE_OPTIONS -Wpedantic -Wall -Wextra
		COMPILE_DEFINITIONS BOOST_TEST_DYN_LINK
  		INCLUDE_DIRECTORIES ${Boost_INCLUDE_DIR}
  		INCLUDE_DIRECTORIES ${SOURCE_PATH}
  		LINK_LIBRARIES ${Boost_LIBRARIES}
	)

	add_test(TestGrasp grasp_test)

endif()