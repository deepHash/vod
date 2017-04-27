#include <cstdio>
#include <string>
#include "SimulationService.h"

//ctor's
SimulationService::SimulationService() {
    SmartPtr<ClientService> clientServer(new ClientService);
    SmartPtr<PlayerService> playerServer(new PlayerService);
    this->playerServer = playerServer;
    this->clientServer = clientServer;
}

//dctor's
SimulationService::~SimulationService() {

}

//getters
const SmartPtr<ClientService> &SimulationService::getClientServer() const {
    return clientServer;
}

const SmartPtr<PlayerService> &SimulationService::getPlayerServer() const {
    return playerServer;
}


//methods
void SimulationService::update() {

}

bool SimulationService::loadData() {
    return false;
}

bool SimulationService::executeSimulation() {

    //return readClients() + readMovies() + readSeries()
    readClients();
    readSeries();
    //create a splitter between
    SmartPtr<ViewAble> splitter(new ViewAble(0, "splitter", 0));
    playerServer->addViewAble(splitter);
    readMovies();
    //printSeries();

    return true;
}

//reads all the clients from the file ands calls addClient method in clientService
//ToDo fix bug that all locations end with \n
bool SimulationService::readClients() {
    //variables
    FILE * myFile;
    char buffer[1024];
    vector<string> tokens;
    string id;
    string name;
    string location;
    //END of variables

    myFile = fopen("clientFile.txt", "r");
    if (NULL == myFile) {
        fprintf(stderr, "\n error in opening file!!\n");
        return false;
    }
    //runs on the client file and creates a client of smartptr, adds each one to clientServer
    while (!feof(myFile) ){
        fgets(buffer, 1024, myFile);
        tokens = split(buffer, ',');
        id = tokens[0];
        name = tokens[1];
        location = tokens[2];
        SmartPtr<Client> client(new Client(id, name, location));
        clientServer->addClient(client);
    }

    if(fclose(myFile) == EOF)
        fprintf(stderr, "\n could no close file!!!!\n");
    return true;
}

bool SimulationService::readSeries() {
    //variables
    FILE * myFile;
    char buffer[1024];
    vector<string> tokens;
    string id;
    string name;
    int runTime;
    int episode;
    int season;
    //END of variables

    myFile = fopen("seriesFile.txt", "r");
    if (NULL == myFile) {
        fprintf(stderr, "\n error in opening file!!\n");
        return false;
    }
    //runs on the series file and creates a series of smartptr type, adds each one to the database
    while (!feof(myFile) ){
        fgets(buffer, 1024, myFile);
        tokens = split(buffer, ',');
        id = tokens[0];
        name = tokens[1];
        episode = stoi(tokens[2]);
        season = stoi(tokens[3]);
        runTime = stoi(tokens[4]);
        //ToDo change pointer to series once bug is fixed
//        SmartPtr<Series> series(new Series(id, name, runTime, season, episode));
//        playerServer->addSeries(series);
        SmartPtr<ViewAble> series(new ViewAble(id, name, runTime));
        playerServer->addViewAble(series);
    }

    if(fclose(myFile) == EOF)
        fprintf(stderr, "\n could no close file!!!!\n");
    return true;
}

bool SimulationService::readMovies() {
    //variables
    FILE * myFile;
    char buffer[1024];
    vector<string> tokens;
    string id;
    string name;
    int runTime;
    bool oscarWinner;
    //END of variables

    myFile = fopen("moviesFile.txt", "r");
    if (NULL == myFile) {
        fprintf(stderr, "\n error in opening file!!\n");
        return false;
    }
    //runs on the movie file and creates a movie of smartptr type, adds each one to the database
    while (!feof(myFile) ){
        fgets(buffer, 1024, myFile);
        tokens = split(buffer, ',');
//        for (unsigned int i=0; i<tokens.size(); i++)
//            cout<<tokens[i]<<endl;
        id = tokens[0];
        name = tokens[1];
        runTime = stoi(tokens[2]);
        if (tokens[3] == "true")
            oscarWinner = true;
        else
            oscarWinner = false;
        //ToDo change back to movie once bug is fixed
//        SmartPtr<Movie> movie(new Movie(id, name, runTime, oscarWinner));
//        playerServer->addMovies(movie);
        SmartPtr<ViewAble> movie(new ViewAble(id, name, runTime));
        playerServer->addViewAble(movie);
    }

    if(fclose(myFile) == EOF)
        fprintf(stderr, "\n could no close file!!!!\n");
    return true;
}

//a helper methid to split the input of every row in the files by a comma delimiter
vector<string> SimulationService::split(const string &input, char delim) {
    stringstream ss(input);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;

}

//prints all the series that are currently in the database
void SimulationService::printSeries() {
    playerServer->printSeries();
}

