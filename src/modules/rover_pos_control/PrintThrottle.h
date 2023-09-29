#pragma once

class PrintThrottle {
public:
    PrintThrottle(int threshold) : _threshold(threshold), _counter(0) {}

    bool shouldPrint() {
        _counter++;
        if (_counter >= _threshold) {
            _counter = 0;
            return true;
        }
        return false;
    }

private:
    int _threshold;
    int _counter;
};
