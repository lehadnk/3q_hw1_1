//
// Created by Алексей Заузин on 11.01.2023.
//

#ifndef EXERCISE01_GRAPHCALCULATOR_H
#define EXERCISE01_GRAPHCALCULATOR_H


#include <vector>
#include "GraphPoint.h"

class GraphCalculator {
    public:
        double minValue;
        double maxValue;
        double step;
        int precision;

    std::vector<GraphPoint> calculatePoints();
};


#endif //EXERCISE01_GRAPHCALCULATOR_H
