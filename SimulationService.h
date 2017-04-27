#ifndef HW1_SIMULATIONSERVICE_H
#define HW1_SIMULATIONSERVICE_H

#include "ClientService.h"
#include "PlayerService.h"
#include "ViewAble.h"
#include <sstream>

class SimulationService {
private:
    SmartPtr<ClientService> clientServer;
    SmartPtr<PlayerService> playerServer;

public:

    SimulationService();

    virtual ~SimulationService();

    void update();

    bool loadData();

    bool executeSimulation();

    bool readClients();

    bool readSeries();

    bool readMovies();

    const SmartPtr<ClientService> &getClientServer() const;

    const SmartPtr<PlayerService> &getPlayerServer() const;

    vector<string> split(const string &s, char delim);

    void printSeries();
};

#endif //HW1_SIMULATIONSERVICE_H