cmake_minimum_required(VERSION 3.10)  # Минимальная версия CMake
project(ImageProcessor)  # Имя проекта

set(CMAKE_CXX_STANDARD 11)  # Стандарт C++

# Собираем исполняемый файл ImageProcessor
add_executable(ImageProcessor
    # src/Image.cpp
    # src/ConsoleOutput.cpp
    # src/ImageFileOutput.cpp
    main.cpp
)

# Указываем директорию с заголовочными файлами
target_include_directories(ImageProcessor PRIVATE include)
