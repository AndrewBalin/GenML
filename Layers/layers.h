//
// Created by andrew on 05.12.23.
//

#ifndef BASELAYER_H
#define BASELAYER_H
#include <utility>
#include <vector>
#include "../Neuron/neuron.h"

#endif //BASELAYER_H

using namespace std;

class Layer {
public:
    virtual ~Layer() = default;

    virtual void Init(vector<int> input_shape) {

        this->input_shape = move(input_shape);
        this->output_shape = move(input_shape);

    };

    virtual vector<float> process(vector<float> input_values) {

        output_values = input_values;
        return input_values;

    };
    vector<float> get_output_shape();

    vector<int> input_shape;
    vector<int> output_shape;
private:
    vector<float> output_values;
};


class Liner final : public Layer {
public:
    Liner(int neurons_count, float (*activation)(float));  // set neurons count and activation

    void Init(const vector<int> input_shape) override {  // init layer input shape

        this->Layer::Init(input_shape);
        this->output_shape = {neurons_count};

    };

    vector<float> process(vector<float> input_values) override;  // process input vector

    vector<float> get_weigths();  // get current weights
    void set_weigths(vector<float> new_weights);  // set layer weights
private:
    vector<float> weigths;
    vector<Neuron> neurons;

    float (*activation)(float);
    int neurons_count;
};


class Input final : public Layer {
public:
    explicit Input(vector<int> input_shape);

    void Init() {

        this->Layer::Init(this->input_shape);

    }
};


class Flatten final : public Layer {
public:
    Flatten();
    void Init(const vector<int> input_shape) override {

        this->Layer::Init(input_shape);

        int out = 1;
        for (const int i: input_shape) {
            out *= i;
        }

        this->output_shape = {out};

    }
};