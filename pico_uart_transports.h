#ifndef MICRO_ROS_PICOSDK
#define MICRO_ROS_PICOSDK

#include <stdio.h>
#include <stdint.h>

#include <uxr/client/profile/transport/custom/custom_transport.h>

extern "C" bool pico_serial_transport_open(struct uxrCustomTransport * transport);
extern "C" bool pico_serial_transport_close(struct uxrCustomTransport * transport);
extern "C" size_t pico_serial_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
extern "C" size_t pico_serial_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

#endif //MICRO_ROS_PICOSDK
