cmake_minimum_required(VERSION 3.10)  
project(cpp-grayscale-converter)  

set(CMAKE_CXX_STANDARD 11)  # Стандарт C++


add_executable(ImageProcessor
    # src/Image.cpp
    # src/ConsoleOutput.cpp
    # src/ImageFileOutput.cpp
    main.cpp
)


target_include_directories(cpp-grayscale-converter PRIVATE 
    include
    third_party    
)
