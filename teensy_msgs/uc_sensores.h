#ifndef _ROS_teensy_msgs_uc_sensores_h
#define _ROS_teensy_msgs_uc_sensores_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace teensy_msgs
{

  class uc_sensores : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef float _temp_interior_type;
      _temp_interior_type temp_interior;
      typedef float _humedity_type;
      _humedity_type humedity;
      typedef float _pressure_type;
      _pressure_type pressure;
      typedef float _temp_uc_type;
      _temp_uc_type temp_uc;
      typedef float _temp_driver_type;
      _temp_driver_type temp_driver;
      typedef float _temp_motor_type;
      _temp_motor_type temp_motor;
      typedef float _cs_type;
      _cs_type cs;
      typedef float _acelX_type;
      _acelX_type acelX;
      typedef float _acelY_type;
      _acelY_type acelY;
      typedef float _acelZ_type;
      _acelZ_type acelZ;
      typedef float _giroX_type;
      _giroX_type giroX;
      typedef float _giroY_type;
      _giroY_type giroY;
      typedef float _giroZ_type;
      _giroZ_type giroZ;
      typedef float _magnX_type;
      _magnX_type magnX;
      typedef float _magnY_type;
      _magnY_type magnY;
      typedef float _magnZ_type;
      _magnZ_type magnZ;

    uc_sensores():
      header(),
      temp_interior(0),
      humedity(0),
      pressure(0),
      temp_uc(0),
      temp_driver(0),
      temp_motor(0),
      cs(0),
      acelX(0),
      acelY(0),
      acelZ(0),
      giroX(0),
      giroY(0),
      giroZ(0),
      magnX(0),
      magnY(0),
      magnZ(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_temp_interior;
      u_temp_interior.real = this->temp_interior;
      *(outbuffer + offset + 0) = (u_temp_interior.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temp_interior.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temp_interior.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temp_interior.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temp_interior);
      union {
        float real;
        uint32_t base;
      } u_humedity;
      u_humedity.real = this->humedity;
      *(outbuffer + offset + 0) = (u_humedity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_humedity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_humedity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_humedity.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->humedity);
      union {
        float real;
        uint32_t base;
      } u_pressure;
      u_pressure.real = this->pressure;
      *(outbuffer + offset + 0) = (u_pressure.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pressure.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pressure.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pressure.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pressure);
      union {
        float real;
        uint32_t base;
      } u_temp_uc;
      u_temp_uc.real = this->temp_uc;
      *(outbuffer + offset + 0) = (u_temp_uc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temp_uc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temp_uc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temp_uc.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temp_uc);
      union {
        float real;
        uint32_t base;
      } u_temp_driver;
      u_temp_driver.real = this->temp_driver;
      *(outbuffer + offset + 0) = (u_temp_driver.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temp_driver.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temp_driver.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temp_driver.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temp_driver);
      union {
        float real;
        uint32_t base;
      } u_temp_motor;
      u_temp_motor.real = this->temp_motor;
      *(outbuffer + offset + 0) = (u_temp_motor.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_temp_motor.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_temp_motor.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_temp_motor.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temp_motor);
      union {
        float real;
        uint32_t base;
      } u_cs;
      u_cs.real = this->cs;
      *(outbuffer + offset + 0) = (u_cs.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cs.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cs.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cs.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cs);
      union {
        float real;
        uint32_t base;
      } u_acelX;
      u_acelX.real = this->acelX;
      *(outbuffer + offset + 0) = (u_acelX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acelX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acelX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acelX.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->acelX);
      union {
        float real;
        uint32_t base;
      } u_acelY;
      u_acelY.real = this->acelY;
      *(outbuffer + offset + 0) = (u_acelY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acelY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acelY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acelY.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->acelY);
      union {
        float real;
        uint32_t base;
      } u_acelZ;
      u_acelZ.real = this->acelZ;
      *(outbuffer + offset + 0) = (u_acelZ.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_acelZ.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_acelZ.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_acelZ.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->acelZ);
      union {
        float real;
        uint32_t base;
      } u_giroX;
      u_giroX.real = this->giroX;
      *(outbuffer + offset + 0) = (u_giroX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_giroX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_giroX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_giroX.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->giroX);
      union {
        float real;
        uint32_t base;
      } u_giroY;
      u_giroY.real = this->giroY;
      *(outbuffer + offset + 0) = (u_giroY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_giroY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_giroY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_giroY.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->giroY);
      union {
        float real;
        uint32_t base;
      } u_giroZ;
      u_giroZ.real = this->giroZ;
      *(outbuffer + offset + 0) = (u_giroZ.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_giroZ.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_giroZ.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_giroZ.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->giroZ);
      union {
        float real;
        uint32_t base;
      } u_magnX;
      u_magnX.real = this->magnX;
      *(outbuffer + offset + 0) = (u_magnX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magnX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magnX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magnX.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magnX);
      union {
        float real;
        uint32_t base;
      } u_magnY;
      u_magnY.real = this->magnY;
      *(outbuffer + offset + 0) = (u_magnY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magnY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magnY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magnY.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magnY);
      union {
        float real;
        uint32_t base;
      } u_magnZ;
      u_magnZ.real = this->magnZ;
      *(outbuffer + offset + 0) = (u_magnZ.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_magnZ.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_magnZ.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_magnZ.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->magnZ);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_temp_interior;
      u_temp_interior.base = 0;
      u_temp_interior.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temp_interior.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_temp_interior.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_temp_interior.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->temp_interior = u_temp_interior.real;
      offset += sizeof(this->temp_interior);
      union {
        float real;
        uint32_t base;
      } u_humedity;
      u_humedity.base = 0;
      u_humedity.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_humedity.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_humedity.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_humedity.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->humedity = u_humedity.real;
      offset += sizeof(this->humedity);
      union {
        float real;
        uint32_t base;
      } u_pressure;
      u_pressure.base = 0;
      u_pressure.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pressure.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pressure.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pressure.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->pressure = u_pressure.real;
      offset += sizeof(this->pressure);
      union {
        float real;
        uint32_t base;
      } u_temp_uc;
      u_temp_uc.base = 0;
      u_temp_uc.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temp_uc.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_temp_uc.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_temp_uc.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->temp_uc = u_temp_uc.real;
      offset += sizeof(this->temp_uc);
      union {
        float real;
        uint32_t base;
      } u_temp_driver;
      u_temp_driver.base = 0;
      u_temp_driver.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temp_driver.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_temp_driver.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_temp_driver.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->temp_driver = u_temp_driver.real;
      offset += sizeof(this->temp_driver);
      union {
        float real;
        uint32_t base;
      } u_temp_motor;
      u_temp_motor.base = 0;
      u_temp_motor.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_temp_motor.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_temp_motor.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_temp_motor.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->temp_motor = u_temp_motor.real;
      offset += sizeof(this->temp_motor);
      union {
        float real;
        uint32_t base;
      } u_cs;
      u_cs.base = 0;
      u_cs.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cs.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cs.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cs.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cs = u_cs.real;
      offset += sizeof(this->cs);
      union {
        float real;
        uint32_t base;
      } u_acelX;
      u_acelX.base = 0;
      u_acelX.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_acelX.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_acelX.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_acelX.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->acelX = u_acelX.real;
      offset += sizeof(this->acelX);
      union {
        float real;
        uint32_t base;
      } u_acelY;
      u_acelY.base = 0;
      u_acelY.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_acelY.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_acelY.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_acelY.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->acelY = u_acelY.real;
      offset += sizeof(this->acelY);
      union {
        float real;
        uint32_t base;
      } u_acelZ;
      u_acelZ.base = 0;
      u_acelZ.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_acelZ.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_acelZ.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_acelZ.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->acelZ = u_acelZ.real;
      offset += sizeof(this->acelZ);
      union {
        float real;
        uint32_t base;
      } u_giroX;
      u_giroX.base = 0;
      u_giroX.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_giroX.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_giroX.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_giroX.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->giroX = u_giroX.real;
      offset += sizeof(this->giroX);
      union {
        float real;
        uint32_t base;
      } u_giroY;
      u_giroY.base = 0;
      u_giroY.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_giroY.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_giroY.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_giroY.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->giroY = u_giroY.real;
      offset += sizeof(this->giroY);
      union {
        float real;
        uint32_t base;
      } u_giroZ;
      u_giroZ.base = 0;
      u_giroZ.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_giroZ.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_giroZ.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_giroZ.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->giroZ = u_giroZ.real;
      offset += sizeof(this->giroZ);
      union {
        float real;
        uint32_t base;
      } u_magnX;
      u_magnX.base = 0;
      u_magnX.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_magnX.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_magnX.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_magnX.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->magnX = u_magnX.real;
      offset += sizeof(this->magnX);
      union {
        float real;
        uint32_t base;
      } u_magnY;
      u_magnY.base = 0;
      u_magnY.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_magnY.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_magnY.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_magnY.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->magnY = u_magnY.real;
      offset += sizeof(this->magnY);
      union {
        float real;
        uint32_t base;
      } u_magnZ;
      u_magnZ.base = 0;
      u_magnZ.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_magnZ.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_magnZ.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_magnZ.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->magnZ = u_magnZ.real;
      offset += sizeof(this->magnZ);
     return offset;
    }

    const char * getType(){ return "teensy_msgs/uc_sensores"; };
    const char * getMD5(){ return "31fa70f2662cab9b6776c25faebff51b"; };

  };

}
#endif
