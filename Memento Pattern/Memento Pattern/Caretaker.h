#pragma once

#include <string>
#include <vector>
#include <stack>
#include <memory>

#include "Memento.h"
using namespace std;

class Caretaker {
public:
    void saveState(unique_ptr<Memento> memento) {
        undoStack.push(std::move(memento));
        while (redoStack.size()) {
            undoStack.pop();
        }
    }

    unique_ptr<Memento> undo() {
        if (undoStack.empty()) {
            cout << "No state to undo!" << endl;
            return nullptr;
        }
        auto memento = move(undoStack.top());
        undoStack.pop();
        redoStack.push(make_unique<Memento>(memento->getState())); // Save for redo
        return memento;
    }
    
    unique_ptr<Memento> redo() {
        if (redoStack.empty()) {
            cout << "No state to redo!" << endl;
            return nullptr;
        }
        auto memento = move(redoStack.top());
        redoStack.pop();
        undoStack.push(make_unique<Memento>(memento->getState())); // Save for undo
        return memento;
    }
private:
    stack<unique_ptr<Memento>> undoStack;
    stack<unique_ptr<Memento>> redoStack;
};