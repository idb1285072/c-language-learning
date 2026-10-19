# C/C++ Development Environment Setup — Windows + VS Code

- [Video](https://youtu.be/1PBD5qFWdq8?si=OBAgEgX32suuJBPX)
- [Document](https://www.msys2.org/)

### Step 1: Install MSYS2

- **Download** and **Install** [msys2-x86_64-20250221.exe](https://github.com/msys2/msys2-installer/releases/download/2026-09-27/msys2-x86_64-20260927.exe) from [msys2.org](https://www.msys2.org/) using the default directory: `C:\msys64`

### Step 2: Install GCC Compiler

- Open the `MSYS2 UCRT64` terminal and run:
  ```
  pacman -S mingw-w64-ucrt-x86_64-gcc
  ```

This installs GCC for compiling C and C++ programs.

### Step 3: Configure Windows PATH

Add the following directory to your Windows User Path or System Path:

```
C:\msys64\ucrt64\bin
```

Steps:

1. Click on Windows button and Search for `Edit the system environment variables`.
2. Click Environment Variables.
3. Select `Path` → Edit → New.
4. Add the compiler directory and save.
5. Restart VS Code and the terminal.

Verify installation in a new terminal:

```
gcc --version
g++ --version
```

### Step 4: Install VS Code Extensions

- **Code Runner**:
  Press `Ctrl + ,` then search `run in terminal` and click to enable
- **C/C++ Extension Pack**:
  Press `Ctrl + Shift + P` then type `>preferences: Open User Settings (JSON)` and paste

  ```json
  {
    "code-runner.runInTerminal": true,
    "C_Cpp.default.compilerPath": "C:/msys64/ucrt64/bin/gcc.exe",
    "C_Cpp.default.intelliSenseMode": "gcc-x64",
    "C_Cpp.default.includePath": ["${workspaceFolder}/**"],
    "C_Cpp.default.defines": ["_DEBUG", "UNICODE", "_UNICODE"],
    "C_Cpp.default.cppStandard": "c++17",
    "C_Cpp.default.cStandard": "c11",
    "files.autoSave": "afterDelay"
  }
  ```

### Verify Your Setup

- [More than one programs in a file with input and output](./02-setup-check.c)
- [**Compile** and **Run** C and C++](./03-setup-check.cpp)

### Setup checklist

- MSYS2 installed
- GCC and G++ installed
- Windows PATH configured and checked `gcc --version` and `g++ --version`
- VS Code extensions installed and settings
- C and C++ programs compiled and executed successfully

### Online Code Editor

- [GCC Compiler](https://www.onlinegdb.com/online_c_compiler)
