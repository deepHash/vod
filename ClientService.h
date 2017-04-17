#ifndef HW1_CLIENTSERVICE_H
#define HW1_CLIENTSERVICE_H
#include <vector>
#include "Client.h"
#include "SmartPtr.h"

class ClientService {
private:
    vector<Client> clients;
public:

    //ctor's
    ClientService();

    //dtor's
    virtual ~ClientService();

    //methods
    void  addClient(SmartPtr<Client>);
    void printInactives();

    //getter
    const vector<Client> &getClients() const;

    //Operators
    ClientService& operator=(const ClientService& other ){
        this->clients = other.getClients();
        return *this;
    }
};

#endif //HW1_CLIENTSERVICE_H
