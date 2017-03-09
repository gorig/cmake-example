#include <piezo.h>

Piezo::Piezo() {
    _sensor_distance = 0;
}

Piezo::~Piezo() {
}

void Piezo::SetSensorDistance(int distance) {
    _sensor_distance = distance;
}

void Piezo::AddEvent(int sensor, int tick) {
    if (sensor >= _events.size()) {
        throw "Selected sensor out of range!";
    }
    _events[sensor].push_back(tick);
}

void Piezo::ClearEvents() {
    for (auto &sensor_events : _events) {
        sensor_events.clear();
    }
}

int Piezo::GetSpeed() const {
    return 0;
}

std::list<int, std::allocator<int>> Piezo::GetWheelbases() const {
    return {};
}

json11::Json Piezo::to_json() const {
    return {};
}
