cmake_minimum_required(VERSION 3.5)
project(learning)

set(CMAKE_CURRENT_INCLUDE_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Sql)

set(Qt_Lib Qt5::Widgets Qt5::Gui Qt5::Core Qt5::Sql)


file(GLOB SRC src/*.cpp)
file(GLOB HDR src/*.h)

#qt5_add_resources(RC src/projectchooser.qrc)
add_executable(qtlearning WIN32 ${SRC} ${HDR} ${RC})
target_link_libraries(qtlearning ${Qt_Lib})



