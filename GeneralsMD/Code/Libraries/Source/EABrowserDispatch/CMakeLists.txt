if(WIN32 OR "${CMAKE_SYSTEM}" MATCHES "Windows")
    add_custom_target(BrowserDispatchBuild ALL
        COMMAND midl.exe "${CMAKE_CURRENT_SOURCE_DIR}\\BrowserDispatch.idl" /header BrowserDispatch.h
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        BYPRODUCTS BrowserDispatch.h BrowserDispatch_i.c
    )
endif()

add_library(BrowserDispatch INTERFACE)
target_include_directories(BrowserDispatch INTERFACE ${CMAKE_CURRENT_BINARY_DIR}/..)
