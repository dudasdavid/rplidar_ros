#include "rplidar.h"

using namespace rp::standalone::rplidar;

RPlidarDriver * drv = NULL;

int main(int argc, char * argv[]) {
    
    drv = RPlidarDriver::CreateDriver(rp::standalone::rplidar::DRIVER_TYPE_SERIALPORT);
    
    drv->stoptMotor();
    
}

