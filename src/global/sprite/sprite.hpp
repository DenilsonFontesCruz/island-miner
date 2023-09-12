#pragma once

#include <raylib-cpp.hpp>

namespace miner {
    class Sprite {
    public:
        Sprite(raylib::Texture2D texture);
        ~Sprite();
        void draw(int posX, int posY);

    private:
        raylib::Texture2D m_texture;
    };
}; // namespace miner