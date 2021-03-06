//
// Created by misha on 6/14/20.
//

#ifndef LAB_2_GOODS_H
#define LAB_2_GOODS_H

#include <list>
#include <algorithm>
#include <ctime>
#include <iostream>

using namespace std;

class goods {

protected:

    float price;
    char* name;
    int amount;
    static list<goods> l;

public:



    goods();

    goods(float price, char *name, int amount);

    float getPrice() const;

    void setPrice(float price);

    char *getName() const;

    void setName(char *name);

    int getAmount() const;

    void setAmount(int amount);

    void add();

    static const list<goods> &getL();

    static void setL(const list<goods> &l);

    void print();

    virtual void show();

    virtual ~goods();

};




#endif //LAB_2_GOODS_H
