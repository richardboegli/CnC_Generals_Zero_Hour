# Set source files
set(WWDOWNLOAD_SRC
    Download.cpp
    FTP.CPP
    registry.cpp
    urlBuilder.cpp
    Download.h
    DownloadDebug.h
    downloaddefs.h
    ftp.h
    ftpdefs.h
    Registry.h
    urlBuilder.h
)

# Targets to build.
add_library(wwdownload STATIC)

target_link_libraries(wwdownload PRIVATE
    wwcommon
)

target_sources(wwdownload PRIVATE ${WWDOWNLOAD_SRC})
