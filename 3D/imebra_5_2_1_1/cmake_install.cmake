# Install script for directory: /home/misham/MIRI/SV/3D/imebra_5_2_1_1

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/libimebra" TYPE FILE PERMISSIONS OWNER_WRITE OWNER_READ GROUP_READ WORLD_READ FILES "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/copyright")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libimebra.so.5.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libimebra.so.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libimebra.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/libimebra.so.5.0.0"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/libimebra.so.5"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/libimebra.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libimebra.so.5.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libimebra.so.5"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libimebra.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xImebra include filesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/imebra" TYPE FILE FILES
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/VOIDescription.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/VOILUT.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/acse.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/age.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/baseStreamInput.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/baseStreamOutput.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/baseUidGenerator.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/codecFactory.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/colorTransformsFactory.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/dataSet.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/date.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/definitions.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/dicomDefinitions.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/dicomDictionary.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/dicomDir.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/dicomDirEntry.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/dimse.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/drawBitmap.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/exceptions.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/fileStreamInput.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/fileStreamOutput.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/image.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/imebra.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/lut.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/memory.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/memoryPool.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/memoryStreamInput.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/memoryStreamOutput.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/modalityVOILUT.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/mutableMemory.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/overlay.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/patientName.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/pipeStream.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/randomUidGenerator.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/readingDataHandler.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/readingDataHandlerNumeric.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/serialNumberUidGenerator.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/streamReader.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/streamWriter.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/tag.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/tagId.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/tcpAddress.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/tcpListener.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/tcpStream.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/transform.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/transformHighBit.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/transformsChain.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/uidGeneratorFactory.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/uidsEnumeration.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/writingDataHandler.h"
    "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/library/include/imebra/writingDataHandlerNumeric.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/imebra/cmake/imebraConfig.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/imebra/cmake/imebraConfig.cmake"
         "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles/Export/share/imebra/cmake/imebraConfig.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/imebra/cmake/imebraConfig-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/imebra/cmake/imebraConfig.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/imebra/cmake" TYPE FILE FILES "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles/Export/share/imebra/cmake/imebraConfig.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/imebra/cmake" TYPE FILE FILES "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/CMakeFiles/Export/share/imebra/cmake/imebraConfig-debug.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/misham/MIRI/SV/3D/imebra_5_2_1_1/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
