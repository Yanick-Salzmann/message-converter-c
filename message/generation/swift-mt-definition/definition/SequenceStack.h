#ifndef MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_SEQUENCESTACK_H
#define MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_SEQUENCESTACK_H

#include <stack>
#include <string>

#include "proto/SwiftMtMessageDefinition.pb.h"

namespace message::generation::swift::mt {
    class SequenceStack {
        struct SequenceEntry {
            std::string tag;
            definition::swift::mt::SeqDef* seq;
        };

        std::stack<SequenceEntry> _stack;
        definition::swift::mt::SwiftMtMessageDefinition& _msg_def;

        definition::swift::mt::SeqDef* new_seq();

    public:
        explicit SequenceStack(definition::swift::mt::SwiftMtMessageDefinition& msg_def) : _msg_def(msg_def) {

        }

        void push(std::string sequence, definition::swift::mt::SeqDef& seq_def);
        void pop();

        [[nodiscard]] std::string to_path() const;
        [[nodiscard]] std::string current() const {
            return _stack.top().tag;
        }

        void append_object(const definition::swift::mt::ObjDef& obj);

        void finalize();
    };
}


#endif //MESSAGE_CONVERTER_C_SEQUENCESTACK_H
