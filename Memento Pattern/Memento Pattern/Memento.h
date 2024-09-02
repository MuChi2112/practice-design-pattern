#pragma once

using namespace std;

class Memento {
public:
    explicit Memento(const vector<string>& order) : state(order) {}

    vector<std::string> getState() const {
        return state;
    }

private:
    vector<string> state; // Stores the state of the coffee order
};