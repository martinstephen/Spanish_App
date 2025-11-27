cmake_minimum_required(VERSION 3.5)

# set the project name and version
project(Spanish_Verbs_APP)


include_directories(
inc/ 
inc/util/ 
inc/core/ 
inc/conjugation/)
# Add main.cpp file of project root directory as source file
set (SOURCE_FILES 
src/core/SpanishVerb.cpp 
src/util/String_Helper.cpp
src/conjugation/ConjugationStrategy.cpp
src/conjugation/PresentTenseStragetgy.cpp 
#src/Future_Tense_Simple.cpp  
#src/Imperfect_Tense.cpp 
#src/Indefinite_Tense.cpp 
#src/Present_Continuous.cpp 
#src/Present_Tense.cpp 
#src/Subjunctive_Present.cpp 
)

# Add executable target with source files listed in SOURCE_FILES variable
enable_testing()
#test
add_executable(Spanish_EXE  ${SOURCE_FILES})
if(BUILD_TEST)
  message("Building unit tests: Yes")
  include(FetchContent)
  FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.5.2 # or latest stable
  )
  FetchContent_MakeAvailable(Catch2)
  add_subdirectory(tst)
else()
  message("Building unit tests: No (default)")
endif()


