file(GLOB SUBDIRECTORIES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *)

foreach(SUBDIR ${SUBDIRECTORIES})
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUBDIR})
        if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${SUBDIR}/CMakeLists.txt)
            add_subdirectory(${SUBDIR})
        endif()
    endif()
endforeach()
