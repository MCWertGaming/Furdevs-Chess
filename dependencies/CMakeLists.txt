# CPP-Terminal - Terminal control
set(CPPTERMINAL_BUILD_EXAMPLES OFF CACHE BOOL "don't build examples" FORCE)
set(CPPTERMINAL_ENABLE_INSTALL OFF CACHE BOOL "disable install" FORCE)
set(CPPTERMINAL_ENABLE_TESTING OFF CACHE BOOL "disable testing" FORCE)
add_dependency_local(cpp-terminal)

# Foxspace - shared tools
set(FOXSPACE_BUILD_EXAMPLES OFF CACHE BOOL "disable building of examples" FORCE)
set(FOXSPACE_ENABLE_TESTING OFF CACHE BOOL "disable testing" FORCE)
set(FOXSPACE_ENABLE_INSTALL OFF CACHE BOOL "disable install" FORCE)
add_dependency_local(foxspace)

# Google test - unit testing
set(INSTALL_GTEST OFF CACHE BOOL "disable gtest install" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "disable gmock" FORCE)
add_dependency_local(GTest)
