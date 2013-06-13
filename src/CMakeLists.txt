SET ( HEADER_FILES
    TMXMap.h
    TMXLayer.h
    TMXData.h
    TMXTile.h
)

SET ( SOURCE_FILES
    TMXMap.cpp
    TMXLayer.cpp
    TMXData.cpp
    TMXTile.cpp
)

add_library ( ${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES} )