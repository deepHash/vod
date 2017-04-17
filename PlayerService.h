#ifndef HW1_PLAYERSERVICE_H
#define HW1_PLAYERSERVICE_H
#include "ViewAble.h"
#include "Series.h"
#include "Movie.h"

class PlayerService {
private:
    vector<ViewAble> database;
    int requests;

public:
    //c'tors
    PlayerService();
    PlayerService(const PlayerService&);

    //de'tors
    virtual ~PlayerService();

    //operators
    PlayerService& operator=(const PlayerService& other ){
        //database = other.database;//.getDatabase();
        database.assign(other.database);
        requests = other.getRequests();
        return *this;
    }

    //methods
    SmartPtr<ViewAble> requestsViewable(string id);
    void addSeries(SmartPtr<Series>);
    void addMovies(SmartPtr<Movie>);

    //getters
    const vector<ViewAble> &getDatabase() const;

    int getRequests() const;

};

#endif //HW1_PLAYERSERVICE_H
