#include <iostream>
#include <iomanip>  
using namespace std;
int main() {
    int cargoCount;
    cin >> cargoCount;
    int minibusCount = 0, truckCount = 0, trainCount = 0;
    double totalCost = 0;

    for (int i = 0; i < cargoCount; i++) {
        int tonnage;
        std::cin >> tonnage;

        double cost = 0;

        if (tonnage <= 3) {
            cost = tonnage * 200.0;
            minibusCount++;
        } else if (tonnage <= 11) {
            cost = tonnage * 175.0;
            truckCount++;
        } else {
            cost = tonnage * 120.0;
            trainCount++;
        }

        totalCost += cost;
    }
    double averagePricePerTon = totalCost / cargoCount;
    double minibusPercentage = (static_cast<double>(minibusCount) / cargoCount) * 100;
    double truckPercentage = (static_cast<double>(truckCount) / cargoCount) * 100;
    double trainPercentage = (static_cast<double>(trainCount) / cargoCount) * 100;

    cout << fixed << setprecision(2);  
    cout << averagePricePerTon << endl;
    cout << minibusPercentage << "%" <<endl;
    cout << truckPercentage << "%" << endl;
    cout << trainPercentage << "%" << endl;

    return 0;
}
