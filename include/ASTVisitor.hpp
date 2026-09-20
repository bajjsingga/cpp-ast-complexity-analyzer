#ifndef AST_VISITOR_HPP
#define AST_VISITOR_HPP

#include <string>

struct AnalysisReport {
    int cyclomaticComplexity;
    int rawPointerCount;
    bool hasMemoryRisk;
};

class ASTAnalyzer {
public:
    ASTAnalyzer() = default;
    AnalysisReport analyzeCode(const std::string& code);
};

#endif // AST_VISITOR_HPP
