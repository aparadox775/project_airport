#include <iostream>
using namespace std;
#include "airplane.h"
#include "pasengerAirplane.h"
#include "cargoAirplane.h"
#include "proPilot.h"
#include "unexperiencedPilot.h"
#include "flight.h"
#include <vector>

int main()
{
    // vector <flight>;
    // vector <pilot *> pilots;
    vector<airplane *> airplanes;
    int menu;
    cout << "Welcome\n";
    while (true)
    {

        cout << "what do you desire to do?\n";
        cout << "1. Add airplane\t2.remove airplane\n3.add pilot\t4.remove pilot\n5.add flight\t6.remove flight\n7.reports\n8.exit\n";
        cin >> menu;
        switch (menu)
        {
        case 1:
            int choice;
            cout << "Which airplane do you want to make?\n"
                    "1. passengerAirplane\t2. cargoAirplane\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                static pasengerAirplane *temppasengerAirplane;
                int capacity;
                cout << "please enter the capacity:\n";
                cin >> capacity;
                (temppasengerAirplane)->setCapacity(capacity);
                airplanes.push_back(static_cast<airplane *> (temppasengerAirplane));
                break;
            }
            case 2:
            {
                int weight;
                cout << "please enter the weight:\n";
                cin >> weight;
                cargoAirplane cargoAirplane(weight);
                break;
            }
            default:
                cout << "Invalid command\n";
                break;
            }
            break;
        case 2:
        {
            string id;
            cout << "please enter the airplane id you want to remove\n";
            cin >> id;
            airplane::remove(airplanes, id);
            // call remove airplane function
            break;
        }
        case 3:
        {
            int choosePilot;
            cout << "What pilot do you want to add?\n"
                    "1. proPilot\t2. inexperiencedPilot\n";
            cin >> choosePilot;
            switch (choosePilot)
            {
            case 1:
            {
                int rank;
                string name;
                int age;
                cout << "please enter the rank:\n";
                cin >> rank;
                cout << "please enter the age\n";
                cin >> age;
                cout << "please enter the name\n";
                cin >> name;
                propilot propilot(rank, age, name);
                break;
            }
            case 2:
            {
                int flightNumber;
                string name;
                int age;
                cout << "please enter the flight number:\n";
                cin >> flightNumber;
                cout << "please enter the age\n";
                cin >> age;
                cout << "please enter the name\n";
                cin >> name;
                unexperiencedpilot unexperiencedpilot(flightNumber, age, name);
                break;
            }
            default:
                cout << "Invalid command\n";
                break;
            }
            break;
        }
        case 4:
        {
            string id;
            cout << "please enter the pilot id you want to remove\n";
            cin >> id;
            // call remove pilot function
            break;
        }
        case 5:
        {
            string pilotID, destination, origin, airplaneID;
            cout << "please enter the pilot ID:\n";
            cin >> pilotID;
            cout << "please enter the airplane ID\n";
            cin >> airplaneID;
            cout << "please enter the origin\n";
            cin >> origin;
            cout << "please enter the destination\n";
            cin >> destination;
            flight test_flight(origin, destination, pilotID, airplaneID);
            break;
        }

        case 6:
            // remove flight
            break;
        case 7:
            break;
        case 8:
            return 0;
        default:
            cout << "Invalid command\n";
            break;
        }
        if (menu == 10)
            break;
    }
    // airplane test;

    return 0;
}