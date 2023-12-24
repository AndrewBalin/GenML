//
// Created by andrew on 02.12.23.
//

#define USE_MATH_DEFINES

#include "activation.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <functional>

using namespace std;

bool comp(const float a, const float b) {
        return (a < b);
    }

float Activation::relu(const float value) {
    constexpr float a = 0.;
    return max(a, value, comp);
}

float Activation::sigmoid(const float value) {
    const auto f = static_cast<float>(1. / (1. + pow(M_E, -value)));
    return f;
}

float Activation::softmax(int count, const float values[count]) {
    return 0.;
}


