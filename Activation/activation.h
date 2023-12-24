//
// Created by andrew on 02.12.23.
//

#ifndef ACTIVATION_H
#define ACTIVATION_H



class Activation {
public:
    static float relu(float value);
    static float sigmoid(float value);
    static float softmax(int count, const float values[count]);
};



#endif //ACTIVATION_H
