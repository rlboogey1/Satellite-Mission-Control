#include "Satellite.h" 

using namespace std; 

int main() {
    Satellite sat1("SAT-001", 550, 7.59, 1000, 22);
    sat1.displayStatus();
    
    sat1.increaseSpeed(-4);


    return 0;
}

