#ifndef PLAN_H
#define PLAN_H

#include <string> /* std::string */
#include "cal.h" /* Date, Time */

// typedef std::string Place;
// typedef std::string Event;

class Place
{
public:
    std::string place_name;
public:
    Place(std::string pla);
};

class Event
{
public:
    std::string event_name;
public:
    Event(std::string eve);
};

extern const char *arrangement_header;

#endif