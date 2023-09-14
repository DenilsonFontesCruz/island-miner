// #include "player.hpp"

// namespace miner {
//     Player::Player(const char *path_sprite) :
//         m_texture(path_sprite), m_src(0, 0, 16, 16), m_dest(0, 0, 64, 64), m_speed(3) {}

//     Player::~Player() { m_texture.Unload(); }

//     void Player::input() {
//         if (IsKeyDown(KEY_W))
//             m_dest.y -= m_speed;
//         if (IsKeyDown(KEY_S))
//             m_dest.y += m_speed;
//         if (IsKeyDown(KEY_A))
//             m_dest.x -= m_speed;
//         if (IsKeyDown(KEY_D))
//             m_dest.x += m_speed;
//     }

//     void Player::draw() { m_texture.Draw(m_src, m_dest); }
// } // namespace miner
