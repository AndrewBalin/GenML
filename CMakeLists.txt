cmake_minimum_required(VERSION 3.27)
project(GenML)

set(CMAKE_CXX_STANDARD 17)

add_library(GenML STATIC library.cpp
        library.cpp
        Activation/activation.cpp
        Activation/activation.h
        Neuron/neuron.cpp
        Neuron/neuron.h
        Neuron/neuron.cpp
        Layers/layers.h
        Layers/liner.cpp
        Layers/input.cpp
        Model/models.h
)
