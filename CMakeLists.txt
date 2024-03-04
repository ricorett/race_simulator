cmake_minimum_required(VERSION 3.27)
project(race_simulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(RaceExe main.cpp)
set(SOURCES_RACE
        race_classes/Air_race.cpp
        race_classes/Default_race.cpp
        race_classes/Ground_race.cpp
)
set(HEADERS_RACE
        race_classes/Air_race.h
        race_classes/Default_race.h
        race_classes/Ground_race.h
)
set(SOURCES_TRANSPORT
        transport_classes/Air_transport.cpp
        transport_classes/Broom.cpp
        transport_classes/Camel.cpp
        transport_classes/Camel_fast.cpp
        transport_classes/Centaur.cpp
        transport_classes/Eagle.cpp
        transport_classes/Ground_transport.cpp
        transport_classes/Rug_plain.cpp
        transport_classes/Shoes_everygoes.cpp
)
set(HEADERS_TRANSPORT
        transport_classes/Air_transport.h
        transport_classes/Broom.h
        transport_classes/Camel.h
        transport_classes/Camel_fast.h
        transport_classes/Centaur.h
        transport_classes/Eagle.h
        transport_classes/Ground_transport.h
        transport_classes/Rug_plain.h
        transport_classes/Shoes_everygoes.h
)


add_library(RaceLib SHARED ${SOURCES_RACE} ${HEADERS_RACE})
add_library(TransportLib SHARED ${SOURCES_TRANSPORT} ${HEADERS_TRANSPORT})
target_link_libraries(RaceExe RaceLib TransportLib)