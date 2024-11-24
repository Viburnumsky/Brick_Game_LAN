# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Brick_Game_autogen"
  "CMakeFiles\\Brick_Game_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Brick_Game_autogen.dir\\ParseCache.txt"
  )
endif()
