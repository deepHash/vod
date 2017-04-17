#include <iostream>
#include "SmartPtr.h"
#include "Client.h"
#include "ClientService.h"
#include "SimulationService.h"
using namespace std;

int main() {
/*
    SmartPtr<Client> ptr1(new Client("123", "moshe", "tel-aviv"));
    SmartPtr<Client> ptr2(new Client("1234", "yossi", "Haifa"));

    SmartPtr<ClientService> clientServer(new ClientService);
    clientServer->addClient(ptr1);
    clientServer->addClient(ptr2);

    clientServer->printInactives();
    cout<<"the size of the !@!!@@$!@#$!@#%";
    cout<<clientServer.GetPtr()->getClients().size()<<endl;

  */
    SimulationService simulation;

    simulation.executeSimulation();

    //simulation.getPlayerServer().GetPtr()->requestsViewable("D7I7G6");

    return 0;
}