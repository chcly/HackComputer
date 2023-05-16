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
include (CopyTarget)
include (FindVSEmscripten)

macro(add_application TargetName)

    include_directories(${${TargetName}_INC})

    if (USING_EMSCRIPTEN)

        add_executable(${TargetName}   
                       ${${TargetName}_SRC} )

    elseif (Hack_WIN_MAIN)

        add_executable(${TargetName}  WIN32 ${${TargetName}_SRC})

        if (${TargetName}_COPY_BIN) 
    
            copy_target(${TargetName} ${CMAKE_SOURCE_DIR}/Bin) 
            copy_content(${TargetName} ${CMAKE_SOURCE_DIR}/Bin ${${TargetName}_DAT})

            if (MSVC)
                set_target_properties(
                    ${TargetName} 
                    PROPERTIES 
                    VS_DEBUGGER_WORKING_DIRECTORY  
                    ${CMAKE_SOURCE_DIR}/Bin
                )
            endif()
        endif()
    else()
        
    
        add_executable(${TargetName} ${${TargetName}_SRC})
        if (${TargetName}_COPY_BIN) 
    
            copy_target(${TargetName}  ${CMAKE_SOURCE_DIR}/Bin) 
            copy_content(${TargetName} ${CMAKE_SOURCE_DIR}/Bin ${${TargetName}_DAT})

            if (MSVC)

                set_target_properties(
                    ${TargetName} 
                    PROPERTIES 
                    VS_DEBUGGER_COMMAND  
                   "${Destination}/$<TARGET_FILE_NAME:${TargetName}>"
                )
        
                set_target_properties(
                    ${TargetName} 
                    PROPERTIES 
                    VS_DEBUGGER_WORKING_DIRECTORY  
                   "${CMAKE_CURRENT_SOURCE_DIR}"
                )

            endif()
        endif()
    endif()

    target_link_libraries(
        ${TargetName}
        ${${TargetName}_LIB}
    )

endmacro()
