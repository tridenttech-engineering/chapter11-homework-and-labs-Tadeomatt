//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Matt Tadeo> on <16APRIL2025>

#include <iostream>
#include <iomanip>
using namespace std;

class StockPriceAverage {
public:
    static double* prices;
    static int size;

    static void setPrices(double* newPrices, int newSize) {
        prices = newPrices;
        size = newSize;
    }

    static void displayAverage() {
        double total = 0.0;
        for (int i = 0; i < size; ++i) {
            total += prices[i];
        }

        double average = total / size;
        cout << fixed << setprecision(1); // Match test output formatting
        cout << "Average stock price: " << average << endl;
    }
};

// Define static members
double* StockPriceAverage::prices = nullptr;
int StockPriceAverage::size = 0;

// main.cpp file
int main() {
    double testPrices1[] = {15, 14.5, 15, 14, 14.5}; // Average = 14.6
    StockPriceAverage::setPrices(testPrices1, 5);
    StockPriceAverage::displayAverage();

    double testPrices2[] = {13, 12.5, 14, 13, 13.2, 13, 12.8, 13.5, 13, 13}; // Average = 13.1
    StockPriceAverage::setPrices(testPrices2, 10);
    StockPriceAverage::displayAverage();

    return 0;
}

