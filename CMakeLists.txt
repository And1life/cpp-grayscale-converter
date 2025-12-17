cmake_minimum_required(VERSION 3.10)  
project(cpp_grayscale_converter)  

set(CMAKE_CXX_STANDARD 11)  # Стандарт C++


add_executable(cpp_grayscale_converter
    src/core/Image.cpp
    src/io/ConsoleOutput.cpp
    src/core/ImageConverter.cpp
    src/io/ImageFileOutput.cpp
    main.cpp
)


target_include_directories(cpp_grayscale_converter PRIVATE 
    include
    third_party    
)
