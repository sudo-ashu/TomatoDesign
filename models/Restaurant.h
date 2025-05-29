#ifndef RESTAURANTS_H
#define RESTAURANT_H

#include <bits/stdc++.h>
#include "MenuItem.h"
using namespace std;

class Restaurant {
private:
    static int nextRestaurantId;
    int restaurantId;
    string name;
    string restAddress;
    vector<MenuItem> menu;

public:
    Restaurant(const string& name, const string& restAddress) {
        this -> name = name;
        this -> restAddress = restAddress;
        this -> restaurantId = ++nextRestaurantId;
    }

    ~Restaurant() {
        cout << "Destroying Restaurant: " << name << " , and clearing its menu.";
        menu.clear();
    }

    //Getter and setters
    string getName() const {
        return name;
    }

    void setName(const string& n) {
        name = n;
    }

    string getRestAddress() const {
        return name;
    }

    void setRestAddress(const string& A) {
        restAddress = A;
    }

    void addMenuItem(const MenuItem& item) {
        menu.push_back(item);
    }

    const vector<MenuItem>& getMenu() const {
        return menu;
    }


double Restaurant::nextRestaurantId = 0; 

};

#endif