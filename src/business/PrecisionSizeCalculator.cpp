//
// Created by Алексей Заузин on 11.01.2023.
//

#include "PrecisionSizeCalculator.h"
#include<string>

int PrecisionSizeCalculator::calculate(std::string input) {
    int position = input.find(".");
    if (position == -1) {
        return 0;
    }

    return input.size() - position - 1;
}
