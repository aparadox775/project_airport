#include <iostream>
using namespace std;
#include "airplane.h"
#include "pasengerAirplane.h"
#include "cargoAirplane.h"
#include "flight.h"
#include <cstring>
int main ()
{
    int menu;
    cout << "Welcome\n";
    while (true) {

        cout << "what do you desire to do?\n";
        cout << "1. Add airplane\t2.remove airplane\n3.add pilot\t4.remove pilot\n5.add flight\t6.remove flight\n7.reports";
        cin >> menu;
        switch (menu) {
            case 1:
                int choice;
                cout << "Which airplane do you want to make?\n"
                        "1. passengerAirplane\t2. cargoAirplane\n";
                cin >> choice;
                switch (choice) {
                    case 1: {
                        int capacity;
                        cout << "please enter the capacity:\n";
                        cin >> capacity;
                        pasengerAirplane pasengerAirplane(capacity);
                        break;
                    }
                    case 2: {
                        int weight;
                        cout << "please enter the weight:\n";
                        cin >> weight;
                        cargoAirplane cargoAirplane(weight);
                        break;
                    }
                    default:
                        cout << "Invalid command";
                        break;
                }
            case 2: {
                string id;
                cout << "please enter the airplane id you want to remove";
                cin >> id;
                // call remove airplane function
                break;
            }
            case 3: {
                int choosePilot;
                cout << "What pilot do you want to add?\n"
                        "1. proPilot\t2. inexperiencedPilot\n";
                cin >> choosePilot;
                switch (choosePilot) {
                    case 1: {
                        int rank;
                        cout << "please enter the rank:\n";
                        cin >> rank;
                        pro
                        break;
                    }
                    case 2: {

                    }
                    default:
                        cout << "Invalid command";
                        break;
                }
            }
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:

                break;

            default:
                cout << "Invalid command";
                break;
        }
        if (menu == 10) break;
    }
    airplane test;

    return 0;
}