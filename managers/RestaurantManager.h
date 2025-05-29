#ifndef RESTAURANT_MANAGER_H

#include<bits/stdc++.h>
#include "../models/Restaurant.h"
using namespace std;

//Singleton class
class RestaurantManager {
private:
    vector<Restaurant*> restaurants;
    static RestaurantManager* instance;

    RestaurantManager () {
        //constructor private
    }
public:
    static RestaurantManager* getInstance() {
        if(!instance)
            instance = new RestaurantManager();
        return instance;
    }

    void addRestaurant(Restaurant* r) {
        restaurants.push_back(r);
    }

    vector<Restaurant*> searchByAddress(string location) {
        vector<Restaurant*> result;
        //sorting the array 
        transform(location.begin(), location.end(), location.begin(), ::tolower);

        for(auto& r: restaurants) {
            string restLocation = r->getRestAddress();
            transform(restLocation.begin(), restLocation.end(), restLocation.begin(), ::tolower);

            if(restLocation == location)
                result.push_back(r);
        }

        return result;
    }
};


RestaurantManager* RestaurantManager::instance = nullptr;


#endif