# cpp-grayscale-converter
A simple grayscale image converter in C++. Supports loading and saving in PNG, JPG, and BMP formats. Outputs results to the console and a file.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![C++](https://img.shields.io/badge/C%2B%2B-17%2B-blue.svg)](CMakeLists.txt)

---

## 📋 Requirements

Before you start, make sure you have the following installed:

- **C++ Compiler** (`g++`, `clang++`, or MSVC) with C++17 or higher support
- **CMake** (version 3.16 or higher) for building the project
- **stb_image** and **stb_image_write** (header-only, bundled in repository)

---

## 📖 Description

**cpp-Grayscale-Converter** is an educational image processing library that demonstrates modern C++ file I/O, image manipulation, and cross-format support. It provides a straightforward interface for loading images in multiple formats, converting them to grayscale using the luminosity method, and saving results in various formats.

The main goals of the project are to:
- Understand **image file format** handling (PNG, JPG, BMP)
- Learn **pixel manipulation** and color theory
- Practice **RAII** resource management
- Master **CMake-based** multi-platform builds
- Generate **ASCII art** visualization from images

---

## 🚀 Quick Start

### Step 1: Clone the Repository

```bash
git clone git@github.com:And1life/cpp-grayscale-converter.git
cd cpp-grayscale-converter
```

### Step 2: 🔨 Build with CMake

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

---

## 💡 Usage Examples

```cpp
#include <iostream>
#include "core/Image.hpp"
#include "io/ConsoleOutput.hpp"
#include "core/ImageConverter.hpp"
#include "io/ImageFileOutput.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        Image image("input.jpg");
        ImageConverter::convertToGrayscale(image);
        ImageFileOutput fileOutput("output.jpg");
        fileOutput.output(image); 
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
```

### Console ASCII Visualization

```cpp
    Image image("input.jpg");
    ImageConverter::convertToGrayscale(image);
    ConsoleOutput consoleOutput;
    consoleOutput.output(image);
```

---

## 📁 Project Structure

```
cpp-grayscale-converter/
├── docs/
│   └── Doxyfile                    # Doxygen configuration (In the future)
├── include/
│   ├── core/
│   |   ├── ImageConverter.hpp      # Main Converter class
│   |   └── Image.hpp               # Image data structure
|   └── io/
|       ├── ConsoleOutput.hpp       # Console output
|       ├── ImageFileOutput.hpp     # File output 
|       └── ImageOutput.hpp         # Abstract Output interface
├── src/
│   ├── core/
│   |   ├── ImageConverter.cpp      # Converter implementation
│   |   └── Image.cpp               # Image implementation
|   └── io/
|       ├── ConsoleOutput.hpp       # Console output implementation
|       └── ImageFileOutput.hpp     # File output implementation
├── third_party/
│   ├── stb_image.h                 # Image loading library
│   └── stb_image_write.h           # Image writing library
├── main.cpp
├── input.jpg                       # Input image
├── output.jpg                      # Output image
├── .gitignore                      # Git ignore rules
├── CMakeLists.txt                  # Build configuration
└── README.md                       # This file
```

---

## 📊 Grayscale Conversion Algorithm

The library uses the **luminosity method** for accurate grayscale conversion:

```
Grayscale = 0.299 × Red + 0.587 × Green + 0.114 × Blue
```

This formula weights the color channels based on human perception sensitivity, producing natural-looking results.

**Example:** For an RGB pixel (255, 128, 0):
```
Grayscale = 0.299×255 + 0.587×128 + 0.114×0 = 150.7 ≈ 151
```

---

## 🚀 Future Enhancements

Possible improvements and extensions:

- [ ] Multi-threaded batch processing
- [ ] Additional color filters (sepia, blur, sharpen)
- [ ] 🎨 ASCII Art Mapping (When output to the console, grayscale values ​​are converted to different ASCII characters:)
- [ ] Performance benchmarking with Google Benchmark
- [ ] GPU acceleration (CUDA/OpenCL)
- [ ] Real-time image streaming
- [ ] Histogram equalization

---

### External Dependencies

- **stb_image:** Header-only image loading library
- **stb_image_write:** Header-only image writing library

Both libraries are bundled in the repository for convenience.

---

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Commit with Conventional Commits:
   ```bash
   git commit -m "feat(ImageConverter): add feature description"
   ```
4. Push to branch and create Pull Request

**Commit Types:**
- `feat:` new feature
- `fix:` bug fix
- `test:` add or update tests
- `docs:` documentation changes
- `refactor:` code refactoring
- `perf:` performance improvements

---

## 📝 License

This project is distributed under the **MIT License** — free for educational and commercial use.

```
MIT License

Copyright (c) 2025 And1life

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
```

See [LICENSE](LICENSE) file for full text.

---

## 🔗 Resources

- 📚 [stb_image on GitHub](https://github.com/nothings/stb)
- 📘 [CMake FetchContent Documentation](https://cmake.org/cmake/help/latest/module/FetchContent.html)
- 🎨 [Color Space Theory - RGB to Grayscale](https://en.wikipedia.org/wiki/Grayscale)
- 📖 [C++ File I/O Reference](https://en.cppreference.com/w/cpp/io/basic_fstream)

---

## 📞 Feedback

Have questions or suggestions?

- 🐛 [Report Issues](https://github.com/And1life/cpp-grayscale-converter/issues)
- 💬 Discussions (if enabled)
- 📧 Email: and1life@yandex.ru

---

**Thank you for using cpp-grayscale-converter!** ⭐

If this project was helpful, please star it on GitHub! 🌟
