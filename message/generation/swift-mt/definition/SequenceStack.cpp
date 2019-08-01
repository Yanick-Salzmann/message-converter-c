#include "SequenceStack.h"

#include <sstream>
#include <utility>

namespace message::generation::swift::mt {

    void SequenceStack::push(std::string sequence, definition::swift::mt::SeqDef& seq_def) {
        auto cur = to_path();
        cur += (cur.empty() ? "" : "/") + sequence;
        auto* seq = new_seq();
        seq->MergeFrom(seq_def);
        seq->set_tag(cur);
        _stack.emplace(SequenceEntry{std::move(sequence), seq});
    }

    void SequenceStack::pop() {
        _stack.pop();
    }

    std::string SequenceStack::to_path() const {
        std::stack<SequenceEntry> cur_stack { _stack };
        std::string ret_path;

        while(!cur_stack.empty()) {
            if(ret_path.empty()) {
                ret_path = cur_stack.top().tag;
            } else {
                ret_path = cur_stack.top().tag.append("/").append(ret_path);
            }

            cur_stack.pop();
        }

        return ret_path;
    }

    void SequenceStack::append_object(const definition::swift::mt::ObjDef &obj) {
        if(!_stack.empty()) {
            _stack.top().seq->add_children()->MergeFrom(obj);
        } else {
            _msg_def.add_objs()->MergeFrom(obj);
        }
    }

    definition::swift::mt::SeqDef *SequenceStack::new_seq() {
        if(!_stack.empty()) {
            return _stack.top().seq->add_children()->mutable_seq();
        } else {
            return _msg_def.add_objs()->mutable_seq();
        }
    }
}