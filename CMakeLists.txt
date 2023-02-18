cmake_minimum_required(VERSION 3.15)
project("example" LANGUAGES CXX)

find_package( TIFF REQUIRED )
if ( TIFF_FOUND )
    include_directories( ${TIFF_INCLUDE_DIRS} )
    list(APPEND COLMAP_EXTERNAL_LIBRARIES ${TIFF_LIBRARIES})
endif( TIFF_FOUND )

add_executable(my_target main.cpp)
target_link_libraries(my_target PUBLIC matplot)

