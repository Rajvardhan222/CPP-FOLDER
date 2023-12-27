#include <iostream>

class Distance {
private:
    int feet;
    float inches;

public:
    // Function to set the distance
    void setDistance(int ft, float in) {
        feet = ft;
        inches = in;
    }

    // Function to get the distance from the user
    void getDistance() {
        std::cout << "Enter feet: ";
        std::cin >> feet;
        std::cout << "Enter inches: ";
        std::cin >> inches;
    }

    // Function to display the distance
    void displayDistance() {
        std::cout << "Distance: " << feet << " feet " << inches << " inches" << std::endl;
    }

    // Function to add two distances and return the addition
    Distance addDistances(const Distance &d2) {
        Distance result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;
        
        // Adjust if inches exceed 12
        if (result.inches >= 12.0) {
            result.inches -= 12.0;
            result.feet++;
        }

        return result;
    }
};

int main() {
    Distance dist1, dist2, result;

    // Set and display distances
    dist1.setDistance(5, 8.5);
    std::cout << "Distance 1:\n";
    dist1.displayDistance();

    dist2.getDistance();
    std::cout << "Distance 2:\n";
    dist2.displayDistance();

    // Add distances and display the result
    result = dist1.addDistances(dist2);
    std::cout << "Sum of Distances:\n";
    result.displayDistance();

    return 0;
}
