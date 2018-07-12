#define CRANKMATH_METHOD_INTERVAL_DEFAULT  0
#define CRANKMATH_METHOD_INTERVAL_REV      1
#define CRANKMATH_METHOD_INTERVAL_TOOTH    2
#define CRANKMATH_METHOD_ALPHA_BETA        3
#define CRANKMATH_METHOD_2ND_DERIVATIVE    4

#define fastDegreesToUS(degrees) (degrees * (unsigned long)timePerDegree)

unsigned long angleToTime(int16_t angle, byte method);
uint16_t timeToAngle(unsigned long time, byte method);

volatile int timePerDegree;
volatile uint16_t degreesPeruSx2048;