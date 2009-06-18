
find_package(Qt4 REQUIRED)

find_path(GRANTLEE_INCLUDE_DIR NAMES grantlee/grantlee.h )

find_library(GRANTLEE_LIBRARY NAMES grantlee_core_library )

string(REGEX REPLACE "/[^/]*$" "/grantlee/" GRANTLEE_PLUGIN_PATH ${GRANTLEE_LIBRARY} )

if( GRANTLEE_LIBRARY AND GRANTLEE_INCLUDE_DIR )
  set(Grantlee_FOUND true)
  set(GRANTLEE_LIBRARIES ${GRANTLEE_LIBRARY} )
endif( GRANTLEE_LIBRARY AND GRANTLEE_INCLUDE_DIR  )


