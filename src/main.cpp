#include "ASTVisitor.hpp"
#include <iostream>

int main() {
    std::cout << "===========================================\n";
    std::cout << " C++ AST Complexity & Safety Analyzer\n";
    std::cout << "===========================================\n";

    ASTAnalyzer analyzer;
    AnalysisReport report = analyzer.analyzeCode("void foo() { int* p = new int; }");

    std::cout << "Cyclomatic Complexity: " << report.cyclomaticComplexity << "\n";
    std::cout << "Raw Pointers Found:   " << report.rawPointerCount << "\n";
    std::cout << "Memory Risk Status:   " << (report.hasMemoryRisk ? "HIGH RISK" : "SAFE") << "\n";

    return 0;
}
