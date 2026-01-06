#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    try {
        std::cout << "Scanning for .exe files in: " << fs::current_path() << "\n";

        size_t deletedCount = 0;

        for (const auto& entry : fs::recursive_directory_iterator(fs::current_path())) {
            if (entry.is_regular_file() && entry.path().extension() == ".exe") {
                std::error_code ec;
                fs::remove(entry.path(), ec);
                if (!ec) {
                    std::cout << "Deleted: " << entry.path().string() << "\n";
                    ++deletedCount;
                } else {
                    std::cerr << "Failed to delete: " << entry.path().string()
                              << " (" << ec.message() << ")\n";
                }
            }
        }

        std::cout << "\nTotal deleted: " << deletedCount << " .exe file(s)\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    return 0;
}
