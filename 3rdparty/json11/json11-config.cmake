get_filename_component(json11_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(json11_INCLUDE_DIRS ${json11_CMAKE_DIR}/include)
set(json11_LIBRARIES json11)

add_library(json11::json11 STATIC IMPORTED)
set_target_properties(json11::json11 PROPERTIES IMPORTED_LOCATION ${json11_CMAKE_DIR}/lib/libjson11.a)
set_target_properties(json11::json11 PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${json11_INCLUDE_DIRS})
