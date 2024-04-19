cmake_minimum_required(VERSION 3.5)
cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(PSI VERSION 0.1 LANGUAGES CXX)

list(APPEND CMAKE_PREFIX_PATH /opt/homebrew)
set(VTK_DIR /opt/homebrew/Cellar/vtk@8.2/8.2.0_8/lib/cmake/vtk-8.2)

find_package (VTK 8.2)
find_package (VTK REQUIRED)

include( ${VTK_USE_FILE} )


set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

include_directories( ${CMAKE_CURRENT_BINARY_DIR} )

set(PROJECT_SOURCES
        main.cpp
        icon.qrc
        stage.h stage.cpp stage.ui
        widgetcontrolpanel.h widgetcontrolpanel.cpp widgetcontrolpanel.ui
        widgetmenupanel.h widgetmenupanel.cpp widgetmenupanel.ui
        widgetdirectchange.h widgetdirectchange.cpp widgetdirectchange.ui
        widgetcurrentposition.h widgetcurrentposition.cpp widgetcurrentposition.ui
        mainscreen.h mainscreen.cpp mainscreen.ui
        subscreen.h subscreen.cpp subscreen.ui
        widgetsection.h widgetsection.cpp widgetsection.ui
        startpsi.h startpsi.cpp startpsi.ui
        functionkey.cpp
        functionkey.h
        functionkey.ui
        state_variable.h state_variable.cpp
        logtext.h logtext.cpp
)

file(GLOB UI_FILES *.ui)
file(GLOB HEADER_FILES
    *.h
    *.hpp
    )
file(GLOB CXX_FILES
    *.cxx
    *.cpp
    )

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(PSI
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET PSI APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(PSI SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(PSI
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(PSI PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${VTK_LIBRARIES})

set_target_properties(PSI PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)


if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(PSI)
endif()
