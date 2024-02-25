#include <iostream>
#include <string>
#include <vector>
#include "menu_item.h"

class menu
{
public: 

    menu() = default;
    
    void open()
    {
        int iter(0);
        for (menu_item item : _items) 
        {
            std::cout << iter++ << " : " << item.name << "\n";
        }
        
        int select_num;
        std::cin >> select_num;
        _select(select_num);
    }
    
    void add(menu_item item)
    {
    	_items.push_back(item);
    }
    
private: 

    void _select(int param)
    {
    	int iter(0);
    	for (menu_item item : _items)
    	{
    		if (iter++ == param) item.event();
    	}
    }
    
    std::vector<menu_item> _items;
};