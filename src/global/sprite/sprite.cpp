#include "sprite.hpp";

namespace miner {

    Sprite::Sprite(raylib::Texture2D texture) :
        m_texture(raylib::Texture2DUnmanaged(texture)) {}

    void Sprite::draw(int posX, int posY) {
        m_texture.Draw(posX, posY);
    };

} // namespace miner
