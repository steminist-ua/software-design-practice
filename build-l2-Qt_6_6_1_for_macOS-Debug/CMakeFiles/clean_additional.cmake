# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/l2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/l2_autogen.dir/ParseCache.txt"
  "l2_autogen"
  )
endif()
