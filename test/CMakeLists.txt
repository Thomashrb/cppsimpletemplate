set(TEST_LIBS Catch2 simpletemplate_lib)
set(UNIT_TESTS
  01test
  02test
  03test
)

foreach(_test ${UNIT_TESTS})
  add_executable(${_test} ./${_test}.cpp)
  # Each test is its own executable : link dependencies
  target_link_libraries(${_test} ${TEST_LIBS} Catch2::Catch2WithMain)
  # enable running of test executables with `ctest`
  add_test(${_test} ${_test})
endforeach()
