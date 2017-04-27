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
    int j =0;
    //END of variables
    cout << "DEBUG!!!"<<endl;
//    cout<<pMovie->getInfo()<<endl;
 //  database[50]->getInfo();
//    for (unsigned int i=0; i<database.size(); i++){
//        if (database[i].getInfo() == "series"){
//            printf("%d. %s - %s\n", j, database[i].getId(), database[i].getName());
//            j++;
//        }
//
//    }
}

void PlayerService::printMovies() {

}


