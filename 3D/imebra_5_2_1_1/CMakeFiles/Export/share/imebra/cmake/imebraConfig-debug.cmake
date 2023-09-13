#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "imebra" for configuration "Debug"
set_property(TARGET imebra APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(imebra PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libimebra.so.5.0.0"
  IMPORTED_SONAME_DEBUG "libimebra.so.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS imebra )
list(APPEND _IMPORT_CHECK_FILES_FOR_imebra "${_IMPORT_PREFIX}/lib/libimebra.so.5.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
