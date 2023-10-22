#include <iostream>
using namespace std;
int main() {
    int period;
    cout << "Enter the period for which you need to make calculations: ";
    std::cin >> period;

    int doctors = 7; 
    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int day = 1; day <= period; day++) {
        int dailyPatients;
        cout << "Enter the count of patients for day " << day << ": ";
        cin >> dailyPatients;

        treatedPatients += min(doctors, dailyPatients);
        untreatedPatients += max(0, dailyPatients - doctors);

        if (day % 3 == 0 && untreatedPatients > treatedPatients) {
            doctors++;  
            untreatedPatients -= treatedPatients;  
            treatedPatients = 0;
        }
    }

    cout << "Treated patients: " << treatedPatients << "." << endl;
    cout << "Untreated patients: " << untreatedPatients << "." << endl;

    return 0;
}
