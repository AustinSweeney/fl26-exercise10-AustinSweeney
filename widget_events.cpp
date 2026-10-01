// widget_events.cpp
#include "widget_events.hpp"
#include <iostream>

WidgetEvent::WidgetEvent(QWidget* parent) : QWidget(parent)
{

}

bool WidgetEvent::event(QEvent* event)
{
	std::cout << "Event type: " << static_cast<int>(event->type()) << std::endl;
	std::cout << "Line Check\n";
	char z;
	std::cin >> z;
	//this causes the application to "lag" the event log does not update. It takes a few time of inputting before the application window will even open
	return true;
}
