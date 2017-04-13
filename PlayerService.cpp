#include "PlayerService.h"

//ctor's
PlayerService::PlayerService() {}


//destor's
PlayerService::~PlayerService() {

}

//getters

//methods
SmartPtr<ViewAble> PlayerService::requestsViewable(string id) {
    return SmartPtr<ViewAble>();
}

void PlayerService::addSeries(SmartPtr<Series> series) {
    SmartPtr<ViewAble> ptr;
    ptr =(SmartPtr<ViewAble>) series;
    database.push_back(*ptr.GetPtr());
}

void PlayerService::addMovies(SmartPtr<Movie> movie) {
    //database.push_back(*movie.GetPtr());
}
