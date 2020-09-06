#ifndef ERROR_HPP
#define ERROR_HPP

#define ERROR_DELAY 200
#define CONN_ATTEMPTS 5
#define CONN_DELAY 500

typedef enum {SERIAL_INIT = 1, LOG_INIT = 2, IMU_INIT = 3, ALT_INIT = 4, GPS_INIT = 5, TX_INIT = 6, WERE_SCREWED = 7} errcode_t;
typedef enum {WARN, FATAL} errtype_t;

class Error
{
public:

    static int init();
    static void display(errcode_t, errtype_t);
    static void clear(errcode_t);
    static void summary();

private:

    static int b0;
    static int b1;
    static int b2;

    static int leds[];

    static int accumulated[8];
    static int clean;
};

#endif /* ERROR_HPP */
