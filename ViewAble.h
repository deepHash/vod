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
    vector<Client> currentlyWatchingMe;
public:
    //ctor's
    ViewAble();
    ViewAble(const ViewAble&);

    //destro's
    virtual ~ViewAble();

    //methods
    bool Register(SmartPtr<Client>);
    bool unregister(string id);
    virtual bool play() = 0;

    //getters
    virtual string getInfo() = 0;
    string getId() const ;
    string getName() const ;
    int getTime() const ;
    vector<Client> getCurrentlyWatchingMe() const;



};

#endif //HW1_VIEWABLE_H
