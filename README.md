# cpp-ast-complexity-analyzer

A C++ static analysis tool built using Clang LibTooling to parse Abstract Syntax Trees (AST), calculate Cyclomatic & Cognitive Complexity, and flag memory safety risks in C++ codebases.

## Key Features
* **AST Parsing:** Uses Clang LibTooling to construct and traverse ASTs.
* **Complexity Metrics:** Computes cyclomatic complexity per function.
* **Safety Rules:** Detects raw pointer usage, missing `const` qualifiers, and uninitialized variables.

## Tech Stack
* Modern C++20
* LLVM / Clang LibTooling
* CMake
* Docker
* 
