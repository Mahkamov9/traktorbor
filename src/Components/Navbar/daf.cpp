#include <iostream>
#include <vector>
#include <cmath>

struct DataPoint {
    double x;
    double y;
};

double calculateSum(const std::vector<DataPoint>& data, char variable) {
    double sum = 0.0;
    for (const auto& point : data) {
        sum += (variable == 'x') ? point.x : point.y;
    }
    return sum;
}

double calculateSumProduct(const std::vector<DataPoint>& data) {
    double sum = 0.0;
    for (const auto& point : data) {
        sum += point.x * point.y;
    }
    return sum;
}

double calculateSumSquare(const std::vector<DataPoint>& data) {
    double sum = 0.0;
    for (const auto& point : data) {
        sum += point.x * point.x;
    }
    return sum;
}

int main() {
    std::vector<DataPoint> data = {
        {-2.6, 32.4416},
        {0.5, 17.0625},
        {3.5, -15.9375}
    };

    int n = data.size();
    double sumX = calculateSum(data, 'x');
    double sumY = calculateSum(data, 'y');
    double sumXY = calculateSumProduct(data);
    double sumX2 = calculateSumSquare(data);

    double b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double a = (sumY - b * sumX) / n;

    std::cout << "Linear regression model:\n";
    std::cout << "y = " << a << " + " << b << "x\n";

    return 0;
}
