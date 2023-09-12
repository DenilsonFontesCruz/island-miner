#pragma once

#include "common.hpp"

namespace miner {
    inline std::vector<Sprite> loadTextures(std::string folderPath) {
        for (const auto &entry : std::filesystem::directory_iterator(folderPath)) {
            std::string path_string = entry.path().c_str();
            if (entry.is_regular_file() && path_string.substr(path_string.find_last_of(".") + 1) == "png") {
                raylib::Image image(path_string);
                float length = (float)image.GetWidth() / (float)image.GetHeight();
                std::cout << length << "\n";
                
            }
        };
    }
}; // namespace miner
