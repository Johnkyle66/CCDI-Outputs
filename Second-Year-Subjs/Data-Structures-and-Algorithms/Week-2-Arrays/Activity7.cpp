#include <iostream>
#include <vector>

using namespace std;

// Function declaration:
vector<int> heights(vector<int> &buildings);
void printArray(vector<int> &array);

int main() {

    // Test cases
    vector<int> buildings1 = {-1, 1, 1, 7, 3};
    vector<int> buildings2 = {0, 4};
    vector<int> buildings3 = {-1, 1, 1, 7, 3, 5, 9};
    vector<int> buildings4 = {-1, 1, 1, 7, 3, 5, 9, -3, 3, 15};

    // Output
    cout << "Buildings 1: "; printArray(buildings1); cout << endl;
    cout << "Buildings 2: "; printArray(buildings2); cout << endl;
    cout << "Buildings 3: "; printArray(buildings3); cout << endl;
    cout << "Buildings 4: "; printArray(buildings4); cout << endl;

    // Heights()
    vector<int> visibleBuildings1 = heights(buildings1);
    vector<int> visibleBuildings2 = heights(buildings2);
    vector<int> visibleBuildings3 = heights(buildings3);
    vector<int> visibleBuildings4 = heights(buildings4);

    // Results
    cout << "\nVisible Buildings: \n";
    cout << "Buildings 1: "; printArray(visibleBuildings1); cout << endl;
    cout << "Buildings 2: "; printArray(visibleBuildings2); cout << endl;
    cout << "Buildings 3: "; printArray(visibleBuildings3); cout << endl;
    cout << "Buildings 4: "; printArray(visibleBuildings4); cout << endl;

    cout << "\nPress enter to exit.... ";
    cin.get();
    return 0;
}

// Function definitions:
void printArray(vector<int> &array) {
    cout << "[ ";

    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << ", ";
    }

    cout << "]";
}

vector<int> heights(vector<int> &buildings) {
    vector<int> visibleBuildings;
    int maxHeight = 0;

    for (int i = 0; i < buildings.size(); i++) {
        if (buildings[i] > maxHeight) {
            visibleBuildings.push_back(buildings[i]);
            maxHeight = buildings[i];
        }
    }

    return visibleBuildings;
}
