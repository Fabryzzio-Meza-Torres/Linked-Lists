#include <iostream>
#include "forward_list.h"

int main()
{
    // FowardList:

    ForwardList<int> Listagod;
    Listagod.push_front(7);
    Listagod.push_front(1);
    Listagod.push_front(3);
    Listagod.push_front(6);
    Listagod.push_front(4);
    Listagod.push_front(5);
    Listagod.print();

    Listagod.front();
    Listagod.back();
    Listagod.push_back(12);
    Listagod.push_back(2);
    Listagod.push_back(8);
    Listagod.pop_back();
    Listagod.pop_front();
    Listagod.print();

    Listagod[3];
    Listagod.empty();
    Listagod.size();
    Listagod.sort();
    Listagod.print();

    Listagod.reverse();
    Listagod.print();
    Listagod.clear();
    Listagod.print();
}