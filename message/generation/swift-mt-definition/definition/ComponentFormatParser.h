#ifndef MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_COMPONENTFORMATPARSER_H
#define MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_COMPONENTFORMATPARSER_H

#include "proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <utils/Log.h>

namespace message::generation::swift::mt {
    class ComponentFormatParser {
        LOGGER;

    public:
        static std::vector<definition::swift::mt::ComponentFormat> parse_format(const std::string& format);
    };
}



#endif //MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_COMPONENTFORMATPARSER_H
