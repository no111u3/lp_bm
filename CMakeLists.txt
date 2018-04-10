set(LP_BM_DIR ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB LIB_SRC "${LP_BM_DIR}/src/*.cc")

add_library(lp_bm INTERFACE)

set(LP_BM_SRC ${LIB_SRC} PARENT_SCOPE)

target_include_directories(lp_bm INTERFACE ${LP_BM_DIR}/include)
