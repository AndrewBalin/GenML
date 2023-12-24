//
// Created by andrew on 02.12.23.
//

#include "neuron.h"
#include <functional>
#include <utility>

using namespace std;



Neuron::Neuron(const int weights_count, float (*activation)(float)) { // Neuron initialisation

    this->weights_count = weights_count; // Set weights (and input values) count
    this->activation = *activation; // Set neuron activation function

    vector<float> _weights;

    for (int i = 0; i < weights_count; i++) {
        _weights[i] = (static_cast<float>(rand()) / (RAND_MAX)) + 1; // Randon weights initialisation
    }

    weights = _weights;

}


float Neuron::get_sum(vector<float> values) const { // Get neuron sum

    float sum = 0;

    for (int i = 0; i < this->weights_count; i++) {
        sum += (this->weights[i] * values[i]); // Sum of product weight and value
    }

    return sum;

}


float Neuron::process(vector<float> values) const { // Get output value

    const float value = activation(get_sum(std::move(values))); // Execute activation function on neuron sum
    return value;

}



