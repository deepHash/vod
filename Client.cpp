#include "Client.h"
#include "ViewAble.h"

//c'tors
Client::Client(const Client & client) {
    this->name = client.getName();
    this->id = client.getId();
    this->location = client.getLocation();
    this->timer = 0;
    this->currentViewAble = NULL;
}

//getters

const string &Client::getName() const {
    return name;
}

const string &Client::getLocation() const {
    return location;
}

const string &Client::getId() const {
    return id;
}

//setters
void Client::setCurrentViewAble(const SmartPtr<ViewAble> &currentViewAble) {
    if(this->isWatching()){
        cout << name << " has stopped watching " <<this->currentViewAble->getName() <<" in the middle and is starting to watch something else" <<endl;
    }
    cout << name << " is starting to watch " << currentViewAble.GetPtr()->getName() <<" now" <<endl;
    this->currentViewAble = currentViewAble;
}

//methods
bool Client::playViewAble() {


    if(this->isWatching()){
        timer+=5;
        //checks if the clients time watching the viewable is bigger than viewable run time
        if (currentViewAble->getTime() <= timer ) {
            timer = 0;
            cout << name << " has finished watching " << currentViewAble->getName() << "\n" << endl;
            currentViewAble = NULL;
        }
            //if its not bigger than viewable run time print what he is watch and how much time left
        else {
            cout << name << " has watched " <<currentViewAble->getName() << " for "<< timer << " minutes out of " << currentViewAble->getTime() <<endl;
            currentViewAble->unregister(id);
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

void Client::stopWatching() {
    if(this->isWatching()){
        cout << "stopping " << name << " from watching " << currentViewAble->getName() <<endl;
        currentViewAble->unregister(id);
        currentViewAble = NULL;
    }
    else
        cout <<"nothing to stop, " << name << " is not watching anything anyway\n" <<endl;
}


