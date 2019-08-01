#ifndef MESSAGE_CONVERTER_C_SHEET_H
#define MESSAGE_CONVERTER_C_SHEET_H

#include <memory>
#include <string>
#include <utility>
#include <xlnt/xlnt.hpp>

namespace message::utils::office::excel {
    class Cell {
        xlnt::row_t _row;
        xlnt::column_t _column;
        xlnt::worksheet &_sheet;

        std::unique_ptr<xlnt::cell> _cell;

    public:
        Cell(xlnt::row_t row, xlnt::column_t column, xlnt::worksheet &sheet) :
                _row(row),
                _column(std::move(column)),
                _sheet(sheet) {
            if (column <= _sheet.highest_column()) {
                _cell = std::make_unique<xlnt::cell>(_sheet.cell(_column, _row));
            }

        }

        bool operator==(const Cell &cell) const {
            return _row == cell._row && _column.index == cell._column.index;
        }

        Cell operator++(int) {
            return Cell{_row, _column++, _sheet};
        }

        Cell &operator++() {
            _cell = std::make_unique<xlnt::cell>(_sheet.cell(_column, _row));
            return *this;
        }

        [[nodiscard]] std::string to_string() const;
        [[nodiscard]] std::string to_string_for_merged() const;

    };

    class Row {
        xlnt::row_t _row;
        xlnt::worksheet &_sheet;

    public:
        Row(xlnt::row_t row, xlnt::worksheet &sheet) : _sheet(sheet), _row(row) {

        }

        bool operator==(const Row &other) const {
            return _row == other._row && _sheet.id() == other._sheet.id();
        }

        bool operator!=(const Row &other) const {
            return _row != other._row || _sheet.id() != other._sheet.id();
        }

        [[nodiscard]] std::size_t index() const {
            return static_cast<std::size_t>(_row);
        }

        Cell begin() {
            return Cell{_row, _sheet.lowest_column(), _sheet};
        }

        Cell end() {
            return Cell{_row, ++_sheet.highest_column(), _sheet};
        }
    };

    class Sheet {
        xlnt::worksheet _sheet;

    public:
        explicit Sheet(const xlnt::worksheet &sheet) : _sheet(sheet) {

        }

        [[nodiscard]] std::string name() const;

        Row begin() {
            return Row(_sheet.lowest_row(), _sheet);
        }

        Row end() {
            return Row(_sheet.highest_row() + 1, _sheet);
        }
    };
}


#endif //MESSAGE_CONVERTER_C_SHEET_H
