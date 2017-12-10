<<<<<<< HEAD
# Install script for directory: /home/natanno4/Desktop/project/ex4/Nirnnat/lib/googletest-master
=======
# Install script for directory: /home/natanno4/Desktop/test/Nirnnat/lib/googletest-master
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
<<<<<<< HEAD
  include("/home/natanno4/Desktop/project/ex4/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock/cmake_install.cmake")
=======
  include("/home/natanno4/Desktop/test/Nirnnat/cmake-build-debug/lib/googletest-master/googlemock/cmake_install.cmake")
>>>>>>> 80c6f875702c36cd2224b6c0801deb0b824dc5b4

endif()

