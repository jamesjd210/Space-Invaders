# James Space Invaders Project

Short description or overview of your project.

## Prerequisites

Before you begin, ensure you have the following installed on your system:
- CMake (version 3.11 or higher)
- C++ compiler (e.g., g++, clang, Visual Studio with C++ support)

## Getting Started

To get a local copy up and running follow these simple steps.

### Installation

1. Clone the repository:
   ```sh
   git clone https://github.com/jamesjd210/Space-Invaders.git
   cd Space-Invaders<repository_url>
   ```
2. Create a build directory and navigate to it:
    ```
    mkdir build
    cd build
    ```
3. Generate build files using CMake:
    ```
    cmake ..
    ```
    For Visual Studio
    ```
    cmake .. -G "Visual Studio 16 2019"
    ```
4. Build project using preferred build tool:
    - Unix-like systems (Makefile):
    ```
    make
    ```
    - Visual Studio:
    Open generated .sln file and build within VS IDE

## Usage
Once built run the executable
```
./bin/game.elf
```

