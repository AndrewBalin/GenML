//
// Created by andrew on 07.12.23.
//


//
// Created by andrew on 05.12.23.
//

#include <utility>

#include "layers.h"
#include "../Neuron/neuron.h"


Input::Input(vector<int> input_shape) {

    this->input_shape = std::move(input_shape);

}


void Liner::set_weigths(vector<float> new_weights) {

    this->weigths = std::move(new_weights);

}


vector<float> Liner::get_weigths() {

    return this->weigths;

}


vector<float> Liner::
