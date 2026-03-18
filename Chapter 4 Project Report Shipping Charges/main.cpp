#include <iostream>
#include <cmath>  // for the ceil function
#include <iomanip>

using namespace std;

int main() {
	double weight, distance, rate, cost;
	int scalefactor;

	// Get the weight of the package from the user
	cout << "Enter the weight of the package (kg): ";
	cin >> weight;

	// Input validation for weight
	if (weight <= 0 || weight > 20) {
		cout << "Invalid weight. Please enter a weight between 0 and 20 kg." << endl;
		return 1; // Exit with an error code

	// Get the distance to be shipped from the user
	cout << "Enter the distance to be shipped (miles): ";
	cin >> distance;

	// Input validation for distance
	if (distance <= 10 || distance > 3000) {
		cout << "Invalid distance. Please enter a distance between 10 and 3000 miles." << endl;
		return 1; // Exit with an error code

		// Determine the rate based on the weight
		if (weight <= 2) {
			rate = 1.10;
		} else if (weight <= 6) {
			rate = 2.20;
		} else if (weight <= 10) {
			rate = 3.70;
		} else {
			rate = 4.80;

		// Calculate distance factor
			scalefactor = static_cast<int>(ceil(distance / 500.0));

		// Calculate the total cost
			cost = rate * scalefactor;

		// Display the total shipping cost
			cout << fixed << setprecision(2); // Set precision for currency format
			cout << "The total shipping cost is: $" << cost << endl;
	}