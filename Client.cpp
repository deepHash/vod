#include "Client.h"
#include "ViewAble.h"


Client::Client(const Client & client) {
    this->name = client.getName();
    this->id = client.getId();
    this->location = client.getLocation();
    this->timer = 0;
    this->currentViewAble = NULL;
}

bool Client::playViewAble() {


    if(currentViewAble){
        timer+=5;
        if(currentViewAble->getTime() <= timer ) {
            timer = 0;
            cout << name + " has finished watching " + currentViewAble->getName() <<endl;
            currentViewAble = NULL;
        }

    }
    else return false;

    return true;
}

bool Client::isWatching() {
    if(currentViewAble)
        return true;
    else
        return false;
}

const string &Client::getName() const {
    return name;
}

const string &Client::getLocation() const {
    return location;
}

const string &Client::getId() const {
    return id;
}
