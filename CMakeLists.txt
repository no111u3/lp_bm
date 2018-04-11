set(LP_BM_DIR ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB LIB_SRC "${LP_BM_DIR}/src/*.cc")

add_library(lp_bm ${LIB_SRC})
add_library(lp::bm ALIAS lp_bm)

target_link_libraries(lp_bm
    PRIVATE lp::cc_lib
    PRIVATE lp::cc_core
    PRIVATE lp::devices)

target_include_directories(lp_bm PUBLIC ${LP_BM_DIR}/include)
