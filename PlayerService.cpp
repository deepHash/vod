#include "PlayerService.h"

//ctor's
PlayerService::PlayerService() : requests(0) {
}

PlayerService::PlayerService(const PlayerService & playerService) {
    this->database = playerService.getDatabase();
    this->requests = playerService.getRequests();
}


//destor's
PlayerService::~PlayerService() {

}

//getters

const vector<SmartPtr<ViewAble>> &PlayerService::getDatabase() const {
    return database;
}

int PlayerService::getRequests() const {
    return requests;
}

//methods
SmartPtr<ViewAble> PlayerService::requestsViewable(string id) {
    //create a new ptr reference for the return
    SmartPtr<ViewAble> viewAble(new ViewAble);
    //loop on the database till we find a viewable with the requested id
    for(unsigned int i=0; i< database.size(); i++){
        if (database[i]->getId() == id){
            //cout << database[i].getName();
            viewAble = database[i];
            requests++;
            break;
        }
    }
    return viewAble;
}

void PlayerService::addSeries(SmartPtr<Series> series) {
    SmartPtr<ViewAble> tmp(new Series);
    tmp = series;
    database.push_back(tmp);
}

void PlayerService::addMovies(SmartPtr<Movie> movie) {
    SmartPtr<ViewAble> tmp(new Movie);
    tmp = movie;
    database.push_back(tmp);
}

void PlayerService::addViewAble(SmartPtr<ViewAble> viewable) {
    database.push_back(viewable);
}


void PlayerService::printSeries() {
    //variables
    int j = 0;
    cout << "\n###Printing ALL Series###\n" <<endl;

    //we implemented a splitter between movies and series of type Viewable that has the id of 0
    while(database[j]->getId() != "0") {
            cout << j+1 << ". " << database[j]->getName() << " - " << database[j]->getId()<<endl;
            j++;
    }
}

void PlayerService::printMovies() {
    //variables
    int i=0, j=0, k =0;

    cout << "\n###Printing ALL Movies###\n" <<endl;
    while(database[j]->getId() != "0") {
        j++;
    }
    //after the splitter the movies start so we assign it to an index
    k = j;
    for (i= k+1;i < database.size() ; i++)
        cout << i-k << ". " << database[i]->getName() << " - " << database[i]->getId()<<endl;
}


