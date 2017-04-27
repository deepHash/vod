/*
Authors:
 Igal Tsesis 306335043
 Ben Reich 304951940
*/
#include <iostream>
#include "SmartPtr.h"
#include "Client.h"
#include "SimulationService.h"
using namespace std;

int main() {

    SimulationService simulation;

    simulation.executeSimulation();

    //cout << simulation.getPlayerServer().GetPtr()->requestsViewable("D7I7G6")->getName()<<endl;

    return 0;
}