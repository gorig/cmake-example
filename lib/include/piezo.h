#pragma once

#include <array>
#include <list>
#include <json11.hpp>

class Piezo {
public:
    Piezo();
    virtual ~Piezo();

    void SetSensorDistance(int distance);
    void AddEvent(int sensor, int tick);
    void ClearEvents();

    int GetSpeed() const;
    std::list<int> GetWheelbases() const;

    json11::Json to_json() const;

protected:
    int _sensor_distance;
    std::array<std::list<int>, 2> _events;
};
