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

int main(int argc, char *argv[]) {
    if (argc != 5){
        cout << "NOT ENOUGH ARGUMENTS TO START THE PROGRAM!" <<endl;
    }
    else{
        SimulationService simulation;

        simulation.executeSimulation(argv[1], argv[2], argv[3], argv[4]);
    }

    return 0;
}