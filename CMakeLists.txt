# Author: Younguk Kim (bluekyu)
# Date  : 2017-05-12

cmake_minimum_required(VERSION 3.9)
project(rpcpp_snippets
    DESCRIPTION "Snippets of Render Pipeline C++"
)

# === configure ====================================================================================
set_property(GLOBAL PROPERTY USE_FOLDERS ON)    # Project Grouping

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# check package
include(FindPackages)
if(WIN32)
    include(windows_utils)
endif()

# subdirectory
set(rpcpp_snippets_list
    "GUIs"
    "primitives"
)

foreach(snippet_id ${rpcpp_snippets_list})
    option(rpcpp_snippets_BUILD_${snippet_id} "Enable to build '${snippet_id}'" OFF)
    if(rpcpp_snippets_BUILD_${snippet_id})
        add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/${snippet_id}")
    endif()
endforeach()
# ==================================================================================================
