#ifndef MENUITEM_H

#include<bits/stdc++.h>
using namespace std;

class MenuItem {
private:
    string menuId;
    string name;
    double price;

public:
    MenuItem (const string& menuId, const string& name, double price) {
        this -> menuId = menuId;
        this -> name = name;
        this -> price = price;
    }

    //Getters and setters
    string getMenuId() const {
        return menuId;
    }

    string setMenuId(const string& c) {
        menuId = c;
    }

    string getName() const {
        return name;
    }

    string setName(string& n) {
        name = n;
    }

    double getPrice() const {
        return price;
    }

    double setPrice(double p) {
        price = p;
    }
};

#endif