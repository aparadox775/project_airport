#include <iostream>
using namespace std;
#include "airplane.h"
#include "pasengerAirplane.h"
#include "cargoAirplane.h"
#include "proPilot.h"
#include "unexperiencedPilot.h"
#include "flight.h"
#include <vector>
#include <algorithm>
#include "mainmenu.h"

int main()
{
/*     mainmenu menu;
    menu.test(); */
    
    vector<flight *> flights;
    vector<pilot *> pilots;
    vector<airplane *> airplanes;
    int menu;
    cout << "Welcome\n";
    while (true)
    {

        cout << "what do you desire to do?\n";
        cout << "1.Add airplane\t2.remove airplane\n3.add pilot\t4.remove pilot\n5.add flight\t6.remove flight\n7.reports\n8.exit\n";
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
                // static pasengerAirplane *temppasengerAirplane;
                int capacity;
                cout << "please enter the capacity:\n";
                cin >> capacity;
                pasengerAirplane *temp = new pasengerAirplane(capacity);
                // (temppasengerAirplane)->setCapacity(capacity);
                airplanes.push_back(temp);
                break;
            }
            case 2:
            {
                int weight;
                cout << "please enter the weight:\n";
                cin >> weight;
                cargoAirplane *temp = new cargoAirplane(weight);
                airplanes.push_back(temp);
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
                propilot *temp = new propilot(rank, age, name);
                pilots.push_back(temp);
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
                unexperiencedpilot *temp = new unexperiencedpilot(flightNumber, age, name);
                pilots.push_back(temp);
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
            pilot::remove(pilots, id);
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

            flight *temp = new flight(origin, destination, pilotID, airplaneID);
            flights.push_back(temp);
            break;
        }

        case 6:
        {
            cout << "entere pilot id you wana remove flights";
            string input;
            cin >> input;
            flight::remove(flights, input);
            // remove flight
            break;
        }
        case 7:
        {
            size_t property;
            cout << "how do you want your report to be sorted? \n1.Pilot ID\t\t2.airplaneId\n3.dest\t\t4.origin\n";
            cin >> property;

            sort(flights.begin(), flights.end(), [property](flight *a, flight *b)
                 {
                     switch (property)
                     {
                     case 1:
                         return a->getPilotID() < b->getPilotID();
                         break;
                     case 2:
                         return a->getPlneID() < b->getPlneID()  ;
                         break;
                     case 3:
                         return a->getDest()   < b->getDest()    ;
                         break;
                     case 4:
                         return a->getOrigin() < b->getOrigin()  ;
                         break;
                     default:
                         break;
                     }
                 });
            for (flight *temp : flights)
            {
                temp->print(cout);
            }
            char ch;
            cin >> ch;
        }
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