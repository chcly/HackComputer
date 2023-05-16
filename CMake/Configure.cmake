# -----------------------------------------------------------------------------
#
#   Copyright (c) Charles Carley.
#
#   This software is provided 'as-is', without any express or implied
# warranty. In no event will the authors be held liable for any damages
# arising from the use of this software.
#
#   Permission is granted to anyone to use this software for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely, subject to the following restrictions:
#
# 1. The origin of this software must not be misrepresented; you must not
#    claim that you wrote the original software. If you use this software
#    in a product, an acknowledgment in the product documentation would be
#    appreciated but is not required.
# 2. Altered source versions must be plainly marked as such, and must not be
#    misrepresented as being the original software.
# 3. This notice may not be removed or altered from any source distribution.
# ------------------------------------------------------------------------------
include(GitUpdate)
include(StaticRuntime)
include(ExternalTarget)
include(FindVSEmscripten)

set_static_runtime()
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# This needs to be synced with Current/pages/CMake.h

option(Hack_BUILD_TEST           "Enables building the unit test program." ON)
option(Hack_BUILD_DOCS           "Builds the current version of the manual." OFF)
option(Hack_AUTO_RUN_TEST        "Automatically run the unit test program." OFF)
option(Hack_CHECK_INT_BOUNDS     "Enables throwing an overflow exception when manipulating individual bits." ON)
option(Hack_IMPLEMENT_BLACK_BOX  "If this is true most chips will be implemented with computed logic gates." OFF)
option(Hack_VM_ZERO_RAM          "Emits extra instructions to zero RAM values that are no longer in use." OFF)
option(Hack_VM_GUARD_PUSH        "Emits conditional instructions to prevent pushing ram segments when its out of context." OFF)
option(Hack_USE_SDL              "Enables or disables the SDL runtime." OFF)
option(Hack_GEN_SVG_PARSE_TREES  "Regenerates SVG files off of the test .jack files." OFF)

# back end specific 
option(Hack_JUST_MY_CODE         "Enable the /JMC flag" ON)

set(Hack_INSTALL_PATH "" CACHE PATH "Specify installation directory")

set(BUILD_GMOCK   OFF CACHE BOOL "" FORCE)
set(INSTALL_GTEST OFF CACHE BOOL "" FORCE)
set(GTEST_DIR     ${Hack_SOURCE_DIR}/Test/googletest)
set(GTEST_INCLUDE ${Hack_SOURCE_DIR}/Test/googletest/googletest/include)
set(GTEST_LIBRARY gtest_main)

set(Extern_DIR ${Hack_SOURCE_DIR}/Extern)
if (Hack_USE_SDL)
	if (NOT USING_EMSCRIPTEN)
		set(SDL_INCLUDE ${Extern_DIR}/SDL/SDL/include)
		set(SDL_LIBRARY SDL2-static SDL2main)
		set(SDL_FOLDER Extern)
	endif()
	set(USE_SDL TRUE)
else ()
	set(USE_SDL FALSE)
endif()

if (Hack_VM_ZERO_RAM)
    add_definitions(-DZERO_M)
endif()

if (Hack_VM_GUARD_PUSH)
    add_definitions(-DGUARD_PUSH)
endif()

if (USING_EMSCRIPTEN)
	add_definitions(-DUSING_EMSCRIPTEN)
	set(BuildType "WASM")
else()
	set(BuildType "CPP")
endif()

if (MSVC)
	# globally disable scoped enum warnings
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd26812")

	if (Hack_JUST_MY_CODE)
		# Enable just my code...
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /JMC")
	endif()
	find_package (OpenMP)

	if (OpenMP_FOUND)	
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
	endif()

	set(WebRunner_DIR ${Hack_SOURCE_DIR}/Web/build/windows/runner)
	set(Test_DIR      ${Hack_SOURCE_DIR}/Web/test)
	
else()
	set(WebRunner_DIR ${Hack_SOURCE_DIR}/Web/build/linux/x64)
	set(Test_DIR      ${Hack_SOURCE_DIR}/Web/test)

	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Os -O3 -fPIC")
endif()

include(CopyTarget)
