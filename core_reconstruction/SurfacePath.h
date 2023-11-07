#ifndef _ROS_SERVICE_SurfacePath_h
#define _ROS_SERVICE_SurfacePath_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace core_reconstruction
{

static const char SURFACEPATH[] = "core_reconstruction/SurfacePath";

  class SurfacePathRequest : public ros::Msg
  {
    public:
      typedef const char* _npts_path_type;
      _npts_path_type npts_path;

    SurfacePathRequest():
      npts_path("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_npts_path = strlen(this->npts_path);
      varToArr(outbuffer + offset, length_npts_path);
      offset += 4;
      memcpy(outbuffer + offset, this->npts_path, length_npts_path);
      offset += length_npts_path;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_npts_path;
      arrToVar(length_npts_path, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_npts_path; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_npts_path-1]=0;
      this->npts_path = (char *)(inbuffer + offset-1);
      offset += length_npts_path;
     return offset;
    }

    const char * getType(){ return SURFACEPATH; };
    const char * getMD5(){ return "94c9f901d096f9fb446c26b3fcbffb58"; };

  };

  class SurfacePathResponse : public ros::Msg
  {
    public:
      typedef int8_t _status_type;
      _status_type status;

    SurfacePathResponse():
      status(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_status;
      u_status.real = this->status;
      *(outbuffer + offset + 0) = (u_status.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_status;
      u_status.base = 0;
      u_status.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->status = u_status.real;
      offset += sizeof(this->status);
     return offset;
    }

    const char * getType(){ return SURFACEPATH; };
    const char * getMD5(){ return "581cc55c12abfc219e446416014f6d0e"; };

  };

  class SurfacePath {
    public:
    typedef SurfacePathRequest Request;
    typedef SurfacePathResponse Response;
  };

}
#endif
