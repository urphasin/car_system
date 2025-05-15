#include <iostream>
#include <vector>
#include <numeric>

struct Candle {
    double open;
    double high;
    double low;
    double close;
};

double calculateAveragePrice(const std::vector<Candle>& candles) {
    if (candles.size() != 10) {
        std::cerr << "Error: Exactly 10 candles are required.\n";
        return -1;
    }

    double totalPrice = 0.0;
    for (const auto& candle : candles) {
        double averageCandlePrice = (candle.open + candle.high + candle.low + candle.close) / 4.0;
        totalPrice += averageCandlePrice;
    }

    return totalPrice / candles.size();
}

int main() {
    std::vector<Candle> candles = {
        {2625.16, 2635.57, 2618.69, 2625.26},
        {2625.26, 2628.83, 2605.52, 2613.28},
        {2613.28, 2619.01, 2602.88, 2612.27},
        {2612.28, 2627.29, 2578.58, 2606.50},
        {2606.45, 2606.45, 2559.67, 2569.38},
        {2569.38, 2589.56, 2563.42, 2583.97},
        {2583.97, 2586.07, 2561.21, 2584.62},
        {2584.62, 2601.05, 2576.89, 2597.57},
        {2597.57, 2600.02, 2580.76, 2587.63},
        {2587.63, 2594.50, 2580.93, 2581.00}
    };

    double averagePrice = calculateAveragePrice(candles);
    if (averagePrice != -1) {
        std::cout << "The average price of the last 10 candles is: " << averagePrice << "\n";
    }

    return 0;
}