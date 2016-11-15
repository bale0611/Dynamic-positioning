
#include "SensorCalculations.h"
#include <math.h>

#define PI 3.14159265

SensorCalculations::calculateHeading(Vector2 currentPosition, Vector2 setpointPosition){
    float x = setpointPosition.x - currentPosition.x;
    float y = setpointPosition.y - currentPosition.y;

    heading = atan2 (y,x) * 180 / PI;
}