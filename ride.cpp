#include <iostream>
#include <string>
#include <vector>
using namespace std;

// -------- Base Class Ride ----------
class Ride {
protected:
    int distance;        // in km
    float costPerKm;
    string driverID;
public:
    // Constructor
    Ride(int d = 0, float c = 0.0f, string id = "Unknown")
        : distance(d), costPerKm(c), driverID(id) {}

    // Calculate total fare
    virtual float calculateFare() const {
        return distance * costPerKm;
    }

    // Operator overloading to combine two rides
    Ride operator+(Ride &r) {
        return Ride(distance + r.distance, costPerKm, driverID + "+" + r.driverID);
    }

    // Compare rides based on fare
    bool operator<( Ride &r) {
        return this->calculateFare() < r.calculateFare();
    }

    virtual void display() const {
        cout << "Driver: " << driverID
             << " | Distance: " << distance 
             << " km | Fare: Rs." << calculateFare() << endl;
    }

    virtual ~Ride() {} // virtual destructor
};

// -------- Derived Classes ----------
class CarRide : public Ride {
public:
    CarRide(int d = 0, string id = "CarDriver") : Ride(d, 12.0f, id) {}
    void display()   {
        cout << "[Car Ride] Driver: " << driverID
             << " | Distance: " << distance 
             << " km | Fare: Rs." << calculateFare() << endl;
    }
};

class BikeRide : public Ride {
public:
    BikeRide(int d = 0, string id = "BikeDriver") : Ride(d, 6.0f, id) {}
    void display()  {
        cout << "[Bike Ride] Driver: " << driverID
             << " | Distance: " << distance 
             << " km | Fare: Rs." << calculateFare() << endl;
    }
};

class AutoRide : public Ride {
public:
    AutoRide(int d = 0, string id = "AutoDriver") : Ride(d, 8.0f, id) {}
    void display()  {
        cout << "[Auto Ride] Driver: " << driverID
             << " | Distance: " << distance 
             << " km | Fare: Rs." << calculateFare() << endl;
    }
};

// -------- Template Class RideLog ----------
template <typename T>
class RideLog {
    vector<T*> rides;   // store POINTERS, not objects
public:
    void addRide(T* ride) {
        rides.push_back(ride);
    }

    void showLog() {
        cout << "\n---- Ride Log ----\n";
        for (size_t i = 0; i < rides.size(); i++) {
            rides[i]->display();   // now works (rides[i] is a pointer)
        }
    }
};


// -------- Main Function ----------
int main() {
    CarRide car(10, "C123");
    BikeRide bike(5, "B456");
    AutoRide autoR(8, "A789");

    car.display();
    bike.display();
    autoR.display();

    if (bike < car)
        cout << "\nBike ride is cheaper than Car ride.\n";

    Ride shared = car + autoR;
    cout << "\nShared Ride (Car + Auto): ";
    shared.display();

    // Ride Log
    RideLog<Ride> log;
    log.addRide(&car);     // pass address (pointer)
    log.addRide(&bike);
    log.addRide(&autoR);
    log.addRide(&shared);

    log.showLog();

    return 0;
}


