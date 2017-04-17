#include "PlayerService.h"

//ctor's
PlayerService::PlayerService() {}


//destor's
PlayerService::~PlayerService() {

}

//getters

//methods
SmartPtr<ViewAble> PlayerService::requestsViewable(string id) {
    SmartPtr<ViewAble> viewAble;
    for(unsigned int i=0; i< database.size(); i++){
        if (database[i].getId() == id){
            cout << database[i].getName();
            break;
        }
    }
    return viewAble;
}

void PlayerService::addSeries(SmartPtr<Series> series) {
    database.push_back(*series.GetPtr());
}

void PlayerService::addMovies(SmartPtr<Movie> movie) {
    database.push_back(*movie.GetPtr());
}
