#ifndef HW1_CLIENTSERVICE_H
#define HW1_CLIENTSERVICE_H
#include <vector>
#include "Client.h"
#include "SmartPtr.h"

class ClientService {
private:
    vector<SmartPtr<Client>> clients;
public:

    //ctor's
    ClientService();

    //dtor's
    virtual ~ClientService();

    //methods
    void  addClient(SmartPtr<Client>);
    void printInactives();

    //getter
    const vector<SmartPtr<Client>> &getClients() const;

    SmartPtr<Client> getClient(string id);

    //Operators
    ClientService& operator=(const ClientService& other ){
        this->clients = other.getClients();
        return *this;
    }
};

#endif //HW1_CLIENTSERVICE_H
