#ifndef MESSAGE_CONVERTER_C_WORKBOOK_H
#define MESSAGE_CONVERTER_C_WORKBOOK_H

#include "config.h"
#include "Sheet.h"

#include <iostream>
#include <string>

#include <xlnt/xlnt.hpp>

namespace message::utils::office::excel {
    class OU_DLL_API WorkBook {
        xlnt::workbook _work_book;
        std::vector<Sheet> _sheets;

        void load_work_book_from_stream(std::istream& stream);

        void load_sheets();

    public:
        explicit WorkBook(const std::string& file_path);
        explicit WorkBook(std::istream& stream);

        std::vector<Sheet>::iterator begin() {
            return _sheets.begin();
        }

        std::vector<Sheet>::iterator end() {
            return _sheets.end();
        }
    };
}


#endif //MESSAGE_CONVERTER_C_WORKBOOK_H
