cmake_minimum_required(VERSION 3.12)
project(mca2nd)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(obj)

add_executable(mca2nd
    .idea/mca2nd.iml
    .idea/misc.xml
    .idea/modules.xml
    .idea/workspace.xml
    obj/Debug/main.o
    case1.h
    case3.h
    inc.h
    main.cpp
    mca2nd.cbp
    mca2nd.depend
    q1.h
    q2.h
    q3.h
    qfiles.h
    questions.cpp
    questions.h)
