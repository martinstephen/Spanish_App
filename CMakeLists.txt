cmake_minimum_required(VERSION 3.10)


# set the project name and version
project(Spanish_Verbs VERSION 1.0)
include_directories(Spanish_verbs/inc/ )
# Add main.cpp file of project root directory as source file
set(SOURCE_FILES Spanish_verbs/src/Spanish_Verbs.cpp,
Spanish_verbs/src/Future_Tense_Simple.cpp,
Spanish_verbs/src/Spanish_Verbs.cpp,
Spanish_verbs/src/Spanish_Verbs.cpp,
Spanish_verbs/src/Spanish_Verbs.cpp,
Spanish_verbs/src/Spanish_Verbs.cpp,
Spanish_verbs/src/Spanish_Verbs.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(Spanish_App ${SOURCE_FILES})