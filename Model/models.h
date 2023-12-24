//
// Created by andrew on 07.12.23.
//

#ifndef MODELS_H
#define MODELS_H
#include "../Layers/layers.h"

#endif //MODELS_H


using namespace std;
#include <functional>


class BaseModel {
public:
    vector<Layer> layers;
    void predict(vector input_values);
    
};