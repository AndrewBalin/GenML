//
// Created by andrew on 05.12.23.
//

#include <utility>

#include "layers.h"
#include "../Neuron/neuron.h"


Liner::Liner(const int neurons_count, float (*activation)(float)) {

    this->neurons_count = neurons_count;
    this->activation = *activation;

}


void Liner::set_weigths(vector<float> new_weights) {

    this->weigths = std::move(new_weights);

}


vector<float> Liner::get_weigths() {

    return this->weigths;

}

vector<float> Liner::process(vector<float> input_values) {

    vector<float> outout_vector;

    for(int i = 0; i < this->neurons.size(); i++) {

        const float result = neurons[i].process(input_values);
        outout_vector[i] = result;

    }

    return outout_vector;
}

