#ifndef PUT_LOG_LOG_STREAM_HPP
#define PUT_LOG_LOG_STREAM_HPP

#include "log/log_output.hpp"

namespace put { namespace log {

class LogStream {
public:
    LogStream(LogOutput*);
    LogStream(LogStream&&);
    ~LogStream();

    int write_bytes(const char*, size_t);

    LogStream& operator << (const char*);
    LogStream& operator << (const int&);

private:
   LogOutput* output_;

};

}}



#endif //PUT_LOGSTREAM_HPP