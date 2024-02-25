#pragma once

#ifndef __MENU_ITEM__
#define __MENU_ITEM__

#include <iostream>
#include <string>
#include <functional>

class menu_item
{
public: 

	menu_item(std::string name, std::function<void()> func) : _name(name), _action(func)
	{	}
	
	~menu_item() = default;
	
	void event()
	{
	    system("cls");
	    std::cout << "- " << _name << "\n";
	    _action();
	}
	
	std::string const& name = _name;
	
private: 

	std::string _name;
	std::function<void()> _action;
};

#endif