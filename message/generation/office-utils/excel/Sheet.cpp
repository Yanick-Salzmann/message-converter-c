#include "excel/Sheet.h"

namespace message::utils::office::excel {

    std::string Sheet::name() const {
        return _sheet.title();
    }

    std::string Cell::to_string() const {
        if(_cell == nullptr) {
            return {};
        }

        return _cell->to_string();
    }

    std::string Cell::to_string_for_merged() const {
        if(_cell == nullptr) {
            return {};
        }

        const auto regions = _sheet.merged_ranges();
        auto is_merged = false;
        xlnt::row_t top_row{};
        xlnt::column_t left_column;

        for(const auto& range : regions) {
            const auto& top_left = range.top_left();
            const auto& bottom_right = range.bottom_right();
            const auto& ref = _cell->reference();

            if(ref.column() >= top_left.column() && ref.row() >= top_left.row() &&
            ref.column() <= bottom_right.column() && ref.row() <= bottom_right.row()) {
                is_merged = true;
                top_row = top_left.row();
                left_column = top_left.column();
                break;
            }
        }

        if(!is_merged) {
            return to_string();
        }

        return _sheet.cell(left_column, top_row).to_string();
    }
}