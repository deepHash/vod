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

    bool loadData(char* clientFile, char* seriesFile, char* movieFile);

    bool executeSimulation(char* clientFile, char* seriesFile, char* movieFile, char* simulationFile);

    bool readClients(char*);

    bool readSeries(char*);

    bool readMovies(char*);

    const SmartPtr<ClientService> &getClientServer() const;

    const SmartPtr<PlayerService> &getPlayerServer() const;

    vector<string> split(const string &s, char delim);

    void printSeries();

    void printMovies();

    void registerView(string viewableID, string clientID);

    void printItem(string id);

    void printInactives();

    void stopView(string id);
};

#endif //HW1_SIMULATIONSERVICE_H