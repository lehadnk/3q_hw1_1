//
// Created by Алексей Заузин on 11.01.2023.
//

#include <cmath>
#include "GraphCalculator.h"

std::vector<GraphPoint> GraphCalculator::calculatePoints() {
    std::vector<GraphPoint> result = std::vector<GraphPoint>();
    float x = this->minValue;
    float fpNumberFactor = pow(10, this->precision);

    do {
        // We use this hack to bypass floating point comparison issue
        if ((round(x * fpNumberFactor) / fpNumberFactor) == 3.0) {
            x += this->step;
            continue;
        }

        // y = ((sqrt(x^2) - 5x + 6)^2) / (x - 3)
        float y = pow((sqrt(pow(x, 2)) - 5 * x + 6), 2) / (x - 3.00);
        result.emplace_back(x, y);

        x += this->step;
    } while (x <= this->maxValue);

    return result;
}
