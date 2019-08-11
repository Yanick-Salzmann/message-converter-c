#ifndef MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_GRAMMARGENERATOR_H
#define MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_GRAMMARGENERATOR_H

#include <sstream>
#include "proto/SwiftMtMessageDefinition.pb.h"

namespace message::definition::swift::mt {
    class GrammarGenerator {
        static std::string print_suffix(bool mandatory, bool repeated);
    public:
        static void print_mt_body(std::stringstream &stream, const message::definition::swift::mt::SwiftMtMessageDefinition &msg);
        static void print_field_options(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj);
        static void print_field_format(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::FldDef &fld);
        static void print_sequences(std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj);
        static void print_field(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj);

        static std::string generate_grammar(const std::string& cur_dir, const message::definition::swift::mt::SwiftMtMessageDefinition& defn, const std::string& mt);
    };
}


#endif //MESSAGE_CONVERTER_C_GRAMMARGENERATOR_H
