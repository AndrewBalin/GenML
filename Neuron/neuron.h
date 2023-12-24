//
// Created by andrew on 02.12.23.
//

#ifndef NEURON_H
#define NEURON_H
#include <functional>

using namespace std;

class Neuron {
public:
    Neuron(int weights_count, float (*activation)(float));  // set acticvation and weights count
    int weights_count{};                                    // previous layer length
    vector<float> weights;  // prevous weights
    float (*activation)(float);  // activation function
    float get_value(float sum);  // get processed value
    float process(vector<float> values) const;  // process input vector
private:
    float get_sum(vector<float> values) const;  // get sum formula
};



#endif //NEURON_H
