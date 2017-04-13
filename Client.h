#ifndef HW1_CLIENT_H
#define HW1_CLIENT_H
#include <string>
#include "SmartPtr.h"

using namespace std;
class ViewAble;
class Client {
private:
    string id;
    string name;
    string location;
    SmartPtr<ViewAble> currentViewAble;
    int timer;
public:
    //Ctor's
    Client() {timer=0;};

    Client(const string &id, const string &name, const string &location) : id(id), name(name), location(location) {timer=0;}

    //detor's
    virtual ~Client() {}

    //getters
    const string &getId() const;

    const string &getName() const;

    const string &getLocation() const;

    //methods
    bool playViewAble();
    bool isWatching();


};

#endif //HW1_CLIENT_H
