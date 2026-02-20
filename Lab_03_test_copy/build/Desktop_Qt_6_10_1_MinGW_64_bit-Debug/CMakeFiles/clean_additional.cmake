# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "gui_app\\CMakeFiles\\gui_app_autogen.dir\\AutogenUsed.txt"
  "gui_app\\CMakeFiles\\gui_app_autogen.dir\\ParseCache.txt"
  "gui_app\\gui_app_autogen"
  )
endif()
