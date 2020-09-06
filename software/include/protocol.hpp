#ifndef PROTOCOL_HPP
#define PROTOCOL_HPP

#include <cstdint>

#define COMMAND NAME 0

typedef struct _HEALTH_PKT // voltages, current draw
{
    float temp; //battery temperature
    float volt; //battery voltage

} HEALTH_PKT;

typedef struct _IMU_PKT // acceleration, rotation, euler coordinates, etc
{

} IMU_PKT;

typedef struct _BARO_PKT // pressure, temperature, altitude
{
    float pressure;
    float temperature;
    float altitude;
    
} BARO_PKT;

typedef struct _GPS_PKT // logitude, latitude, etc
{
    float lat; //latitude
    float lon; //longitude
    
} GPS_PKT;

typedef struct _EVENT_PKT
{
    char main_deploy;
    char drogue_deploy;
    char launch;
    char payload_deploy;

} EVENT_PKT;

typedef struct _CMD_PKT
{
    int command_type;

} CMD_PKT;

#endif /* PROTOCOL_HPP */
