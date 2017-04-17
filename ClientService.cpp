#include "ClientService.h"

ClientService::ClientService() {

}

ClientService::~ClientService() {

}

void ClientService::addClient(SmartPtr<Client> client) {
    Client newClient = *client.GetPtr();
//    cout <<newClient.getName()<<endl;
//    cout <<newClient.getId()<<endl;
   // cout <<newClient.getLocation()<<endl;
    //cout << "the size of database is:!!!!!!!!!!!";
    //cout <<clients.size()<<endl;
    clients.push_back(newClient);
}

void ClientService::printInactives() {
    //private counter for inactiveUsers
    int j=0;

    //iterate through all clients in clients vector
    cout<< "inactive clients are: " <<endl;
    for(unsigned int i=0; i< clients.size(); i++){
        if(!clients[i].isWatching()){
            j++;
            cout << j;
            cout << ". " + clients[i].getName() + ", " +  clients[i].getId() + ", from: " + clients[i].getLocation() << endl;
        }
    }
    if (j==0)
        cout << "All clients are busy watching something" <<endl;
}

//getters
const vector<Client> &ClientService::getClients() const {
    return clients;
}






