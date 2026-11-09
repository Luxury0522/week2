//202610422125
//林轩宇
#include <stdio.h>

struct Sensor
{
    int temp;
    int humi;
    int valid;
};

struct Sensor pack_sensor(int t, int h)
{
    struct Sensor sensor;

    sensor.temp = t;
    sensor.humi = h;

    if (t >= -20 && t <= 50 && h >= 0 && h <= 100)
    {
        sensor.valid = 1;
    }
    else
    {
        sensor.valid = 0;
    }

    return sensor;
}

int main(void)
{
    int t, h;
    scanf("%d %d", &t, &h);

    struct Sensor sensor = pack_sensor(t, h);

    if (sensor.valid)
    {
        printf("TEMP=%d HUMI=%d\n", sensor.temp, sensor.humi);
    }
    else
    {
        printf("ERROR: Out of Range\n");
    }

    return 0;
}
