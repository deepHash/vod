#include <cstdio>
#include <string>
#include <cstring>
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
bool SimulationService::executeSimulation(char* clientFile, char* seriesFile, char* movieFile, char* simulationFile) {
    //variables
    FILE * myFile;
    char buffer[1024];
    string id;
    string viewAble;
    //END of variables

    //calling loadData function to load clients, movies and series
    loadData(clientFile, seriesFile, movieFile);
    //opening simulation file, start reading and calling commands/methods as needed
    myFile = fopen(simulationFile, "r");
    if (NULL == myFile) {
        fprintf(stderr, "\n error in opening file!!\n");
        return false;
    }

    while (!feof(myFile) ) {
        fgets(buffer, 1024, myFile);
        if (0 == strncmp(buffer, "printSeries", 11)){
            printSeries();
            continue;
        }

        if (0 == strncmp(buffer, "printMovies", 11)){
            printMovies();
            continue;
        }
        if (0 == strncmp(buffer, "printInactives", 14)){
            printInactives();
            continue;
        }
        if (0 == strncmp(buffer, "update", 6)){
            update();
            continue;
        }
        if (0 == strncmp(buffer, "printItem", 9)){
            viewAble = "";
            //copies the content after the ':' char to the viewAble string
            for (int i=10; buffer[i] !='\n'; i++){
                viewAble += buffer[i];
            }
            printItem(viewAble);
            continue;
        }
        //if we find stop in the buffer, means we need to take the client id and send it to stopview method
        if(strstr(buffer, "stop")){
            id = "";
            for (int i=0; i < 10; i++){
                id += buffer[i];
            }
            stopView(id);
            continue;
        }
        //the last command that remains is: #user:someid
        // since we used continue in other if conditions, no need for an if condition here
        id = "";
        viewAble = ""; // resetting both id and viewAble
        for (int i=0; i< 10; i++)
            id +=buffer[i];
        for (int i=11; buffer[i] !='\n'; i++)
            viewAble += buffer[i];
        registerView(id, viewAble);
    }

    if(fclose(myFile) == EOF)
        fprintf(stderr, "\n could no close file!!!!\n");
    return true;
}

bool SimulationService::loadData(char* clientFile, char* seriesFile, char* movieFile) {
    //load all the data - clients,movies,series
    readClients(clientFile);
    readSeries(seriesFile);
    //create a splitter between
    SmartPtr<ViewAble> splitter(new ViewAble("0", "splitter", 0));
    playerServer->addViewAble(splitter);
    readMovies(movieFile);
}

void SimulationService::update() {
    //update method will loop through the clients DB and if he is watching something
    //will call the playViewAble method that will update the timer counter
    for(unsigned int i=0; i< clientServer->getClients().size(); i++) {
        if (clientServer->getClients()[i].GetPtr()->isWatching())
            clientServer->getClients()[i].GetPtr()->playViewAble();
    }
}

//reads all the clients from the file ands calls addClient method in clientService
//ToDo fix bug that all locations end with \n
bool SimulationService::readClients(char* clientFile) {
    //variables
    FILE * myFile;
    char buffer[1024];
    vector<string> tokens;
    string id;
    string name;
    string location;
    //END of variables

    myFile = fopen(clientFile, "r");
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

bool SimulationService::readSeries(char* seriesFile) {
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

    myFile = fopen(seriesFile, "r");
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

bool SimulationService::readMovies(char* movieFile) {
    //variables
    FILE * myFile;
    char buffer[1024];
    vector<string> tokens;
    string id;
    string name;
    int runTime;
    bool oscarWinner;
    //END of variables

    myFile = fopen(movieFile, "r");
    if (NULL == myFile) {
        fprintf(stderr, "\n error in opening file!!\n");
        return false;
    }
    //runs on the movie file and creates a movie of smartptr type, adds each one to the database
    while (!feof(myFile) ){
        fgets(buffer, 1024, myFile);
        tokens = split(buffer, ',');
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

//a helper method to split the input of every row in the clients, movies, series files by a comma delimiter
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

//prints all the movies that are currently in the database
void SimulationService::printMovies() {
    playerServer->printMovies();
}

void SimulationService::registerView(string clientID, string viewableID) {
    //calling method to set currentViewable at the client
    clientServer->getClient(clientID)->setCurrentViewAble(playerServer->requestsViewable(viewableID));
    //calling method to register the client for the movie
    playerServer->requestsViewable(viewableID)->Register(clientServer->getClient(clientID));
}

//printing an update regarding item including how many are watching it right now
void SimulationService::printItem(string id) {
    ViewAble item = *playerServer->requestsViewable(id).GetPtr();
    cout << "\n-The item " << item.getName() << " has " << item.getCurrentlyWatchingMe().size() << " clients currently watching it" <<endl;
}

//printing all the clients details that aren't watching anything in the VOD
void SimulationService::printInactives() {
    clientServer->printInactives();
}

//stopping the client from watching what ever he was already watching
void SimulationService::stopView(string id) {
    clientServer->getClient(id)->stopWatching();
}
