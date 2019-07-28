#include "excel/WorkBook.h"

#include <fstream>

namespace message::utils::office::excel {

    WorkBook::WorkBook(std::istream &stream) {
        load_work_book_from_stream(stream);
    }

    WorkBook::WorkBook(const std::string &file_path) {
        std::cout << "Opening work book: " << file_path << std::endl;
        std::ifstream file_stream{file_path, std::ios::in | std::ios::binary};
        if (!file_stream.is_open()) {
            throw std::runtime_error("Error opening excel file");
        }

        load_work_book_from_stream(file_stream);
    }

    void WorkBook::load_work_book_from_stream(std::istream &stream) {
        _work_book.load(stream);

        load_sheets();
    }

    void WorkBook::load_sheets() {
        for (auto i = std::size_t{0}; i < _work_book.sheet_count(); ++i) {
            auto sheet = _work_book.sheet_by_index(i);
            _sheets.emplace_back(sheet);
        }
    }
}