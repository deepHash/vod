#include "ClientService.h"

ClientService::ClientService() {

}

ClientService::~ClientService() {

}

void ClientService::addClient(SmartPtr<Client> client) {
    clients.push_back(client);
}

void ClientService::printInactives() {
    //private counter for inactiveUsers
    int j=0;

    //iterate through all clients in clients vector
    cout<< "\nInactive clients are: \n" <<endl;
    for(unsigned int i=0; i< clients.size(); i++){
        if(!clients[i]->isWatching()){
            j++;
            cout << j;
            cout << ". " + clients[i]->getName() + ", " +  clients[i]->getId() + ", from: " + clients[i]->getLocation() << endl;
        }
    }
    if (j==0)
        cout << "\nAll clients are busy watching something" <<endl;
}

//getters
const vector<SmartPtr<Client>> &ClientService::getClients() const {
    return clients;
}

SmartPtr<Client> ClientService::getClient(string id) {
    //variables
    int i;
    SmartPtr<Client> ptr(new Client);

    for (i=0; i<clients.size(); i++){
        if (clients[i]->getId() == id)
            ptr = clients[i];
    }
    return ptr;
}




