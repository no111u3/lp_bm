get_filename_component(LP_BM_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

include_directories("${LP_BM_CMAKE_DIR}/include")

set(LP_BM_SRC
    "${LP_BM_CMAKE_DIR}/src/reset.cc"
)
