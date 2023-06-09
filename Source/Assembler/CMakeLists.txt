# -----------------------------------------------------------------------------
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
set(TargetName Assembler)
set(TargetGroup Intern)

set(Target_HDR 
    Parser.h
    Scanner.h
    Instruction.h
    Token.h
    ASM.grm
)

set(Target_SRC 
    Parser.cpp
    Instruction.cpp
    Scanner.cpp
)

include_directories(${Hack_SOURCE_DIR}/Source)
add_library(${TargetName} ${Target_SRC} ${Target_HDR})
target_link_libraries(${TargetName} Utils)

if (TargetFolders)
    set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
endif()


if (BuildType STREQUAL "CPP")

    # The command line application
    set(TargetName Asm2Mc)
    set(TargetGroup Executables)


    include_directories(${Hack_SOURCE_DIR}/Source)
    add_executable(${TargetName} Main.cpp)
    target_link_libraries(${TargetName} Utils Assembler)

    copy_target(${TargetName} ${Hack_BINARY_DIR}/build_files) 
    
    if (NOT Hack_INSTALL_PATH STREQUAL  "")
        copy_target(${TargetName} ${Hack_INSTALL_PATH}) 
    endif()

    if (TargetFolders)
        set_target_properties(${TargetName} PROPERTIES FOLDER "${TargetGroup}")
    endif()

endif()
