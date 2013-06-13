SET ( HEADER_FILES
    TMXMap.h
    TMXLayer.h
)

SET ( SOURCE_FILES
    TMXMap.cpp
    TMXLayer.cpp
)

add_library ( ${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES} )