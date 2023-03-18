#include <emscripten/bind.h>
#include "includes/calculator.h"

using namespace emscripten;

float cppFunction(float a, float b, float t) {
    return addFunction(a, b, t);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("cppFunction", &cppFunction);
}