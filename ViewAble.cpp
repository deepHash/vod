#include "ViewAble.h"
#include "Client.h"

//ctor's
ViewAble::ViewAble() {}

ViewAble::ViewAble(string id, string name, int playRunTime) {
    this->id = id;
    this->name = name;
    this->playRunTime = playRunTime;
}

ViewAble::ViewAble(const ViewAble & viewAble) {
    id = viewAble.getId();
    name = viewAble.getName();
    playRunTime = viewAble.getTime();
    currentlyWatchingMe = viewAble.currentlyWatchingMe;
}

//dctor's
ViewAble::~ViewAble() {
    currentlyWatchingMe.clear();
}

//getters
string ViewAble::getId() const {
    return id;
}

int ViewAble::getTime() const {
    return playRunTime;
}

string ViewAble::getName() const {
    return name;
}

vector<SmartPtr<Client>> ViewAble::getCurrentlyWatchingMe() const {
    return currentlyWatchingMe;
}

//methods
bool ViewAble::Register(SmartPtr<Client> client) {
    currentlyWatchingMe.push_back(client);
    return true;
}

bool ViewAble::unregister(string id) {
    //loop through the vector of all clients currently watching this
    for (unsigned int i=0; i < currentlyWatchingMe.size(); i++) {
        //if we have a match to the id parameter in a client erase it from the vector
        if (currentlyWatchingMe[i]->getId() == id) {
            currentlyWatchingMe.erase(currentlyWatchingMe.begin()+i);
            return true;
        }
    }
    return false;
}
