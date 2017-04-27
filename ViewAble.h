#ifndef HW1_VIEWABLE_H
#define HW1_VIEWABLE_H
#include <string>
#include <vector>
#include "SmartPtr.h"

using namespace std;
class Client;
class ViewAble {
protected:
    string name;
    string id;
    int playRunTime;
    vector<SmartPtr<Client>> currentlyWatchingMe;
public:
    //ctor's
    ViewAble();
    ViewAble(string id, string name, int playRunTime);
    ViewAble(const ViewAble&);

    //destro's
    virtual ~ViewAble();

    //methods
    bool Register(SmartPtr<Client>);
    bool unregister(string id);
    virtual bool play() {};

    //getters
    virtual string getInfo() {};
    string getId() const ;
    string getName() const ;
    int getTime() const ;
    vector<SmartPtr<Client>> getCurrentlyWatchingMe() const;



};

#endif //HW1_VIEWABLE_H
