#include "Check_Sensor_Functions.h"
#include "MockApason.h"
#include "RealApason.h"

#include <string>
#include <thread>
#include <chrono>


using namespace std;

int run(ApasonInterface& apason) {
    apason.start();

    while (true){
        if(apason.isActive()){
            this_thread::sleep_for (chrono::seconds(1));
        } else {
            return 0;
        }
    }

    return 0;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Captan, my captain. Gimme some args. \n";
        return -1;
    }

    string apason_type = argv[1];

    if (apason_type == "mock"){

        MockApason apason = MockApason(apason_type);
        return run(apason);
    } else {
        RealApason apason = RealApason(apason_type);
        return run(apason);
    }

}


