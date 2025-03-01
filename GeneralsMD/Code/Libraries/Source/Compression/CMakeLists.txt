add_library(Compression STATIC)

target_include_directories(Compression INTERFACE
    .
)

target_include_directories(Compression PRIVATE
    ../../Include
)

target_sources(Compression PRIVATE
    EAC/btreeabout.cpp
    EAC/btreedecode.cpp
    EAC/btreeencode.cpp
    EAC/huffabout.cpp
    EAC/huffdecode.cpp
    EAC/huffencode.cpp
    EAC/refabout.cpp
    EAC/refdecode.cpp
    EAC/refencode.cpp
    EAC/btreecodex.h
    EAC/codex.h
    EAC/gimex.h
    EAC/huffcodex.h
    EAC/refcodex.h
    CompressionManager.cpp
    Compression.h
)
