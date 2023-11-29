cmake_minimum_required(VERSION 3.1.5)

# set the project name and version
project(Spanish_Verbs)

include_directories(inc)
# Add main.cpp file of project root directory as source file
set (SOURCE_FILES src/Spanish_Verbs.cpp 
src/Future_Tense_Simple.cpp  
src/Imperfect_Tense.cpp 
src/Indefinite_Tense.cpp 
src/Present_Continuous.cpp 
src/Present_Tense.cpp 
src/Subjunctive_Present.cpp 
)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(Spanish_EXE  ${SOURCE_FILES})

