#  Nome do Aquivo:   CmakeLists.txt
#  Descrição:        Unknown purpose yet
#  Data criada:      2021-04-03
#  Versao do Aquivo: 2021-04-10
#  Author:           Celso Eiju Ito - eijuito@gmail.com
#  Obs:              I have no idea what this is about, I simply followed the instructions from:
#                    https://dominikberner.ch/cmake-interface-lib/




add_library(IToIurStepMultiple INTERFACE)

include(GNUInstallDirs)

# Adding the install interface generator expression makes sure that the include
# files are installed to the proper location (provided by GNUInstallDirs)
target_include_directories(IToIurStepMultiple
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_compile_definitions(IToIurStepMultiple
    INTERFACE
        ITOIURSTEPMULTIPLE_DEBUG=$<CONFIG:Debug>
)

# locations are provided by GNUInstallDirs
install(
    TARGETS
        IToIurStepMultiple
    EXPORT
        IToIurStepMultiple_Targets
    ARCHIVE DESTINATION
        ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION
        ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION
        ${CMAKE_INSTALL_BINDIR}
)

include(CMakePackageConfigHelpers)

if(${CMAKE_VERSION} VERSION_GREATER "3.14.0") 
    set(ARCH_INDEPENDENT "ARCH_INDEPENDENT")
endif()

write_basic_package_version_file(
        "${PROJECT_BINARY_DIR}/IToIurStepMultipleConfigVersion.cmake"
    VERSION
        ${PROJECT_VERSION}
    COMPATIBILITY
        SameMajorVersion
    ${ARCH_INDEPENDENT}
)

configure_package_config_file(
        "${PROJECT_SOURCE_DIR}/extras/IToIurStepMultipleConfig.cmake.in"
        "${PROJECT_BINARY_DIR}/IToIurStepMultipleConfig.cmake"
    INSTALL_DESTINATION
        ${CMAKE_INSTALL_DATAROOTDIR}/IToIurStepMultiple/cmake)

install(
    EXPORT
        IToIurStepMultiple_Targets
    FILE
        IToIurStepMultipleTargets.cmake
    DESTINATION
        ${CMAKE_INSTALL_DATAROOTDIR}/IToIurStepMultiple/cmake
)

install(
    FILES
        "${PROJECT_BINARY_DIR}/IToIurStepMultipleConfig.cmake"
        "${PROJECT_BINARY_DIR}/IToIurStepMultipleConfigVersion.cmake"
    DESTINATION
        "${CMAKE_INSTALL_DATAROOTDIR}/IToIurStepMultiple/cmake"
)

install(
    FILES
        IToIurStepMultiple.h
        IToIurStepMultiple.hpp
    DESTINATION
        include
)

install(
    DIRECTORY
        "${CMAKE_CURRENT_SOURCE_DIR}/IToIurStepMultiple"
    DESTINATION
        include
)