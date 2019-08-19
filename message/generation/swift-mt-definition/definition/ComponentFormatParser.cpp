#include "ComponentFormatParser.h"
#include "../format/SwiftMtComponentFormatParser.h"

namespace message::generation::swift::mt {
    LOGGER_IMPL(ComponentFormatParser);

    std::vector<definition::swift::mt::ComponentFormat> ComponentFormatParser::parse_format(const std::string &format) {
        std::vector<definition::swift::mt::ComponentFormat> formats;
        std::vector<std::string> errors;

        if(!definition::swift::mt::SwiftMtComponentFormatParser::parse(format, formats, errors)) {
            std::stringstream error_stream;
            std::copy(errors.begin(), errors.end(), std::ostream_iterator<std::string>{error_stream, ", "});
            log->error("Error parsing format {}. Errors: {}", format, error_stream.str());
            return {};
        }

        return formats;
    }
}