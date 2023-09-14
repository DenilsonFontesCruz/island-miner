#include "common.hpp"

std::atomic_bool g_running{true};
const int g_game_fps = 60;

sf::VideoMode g_screen_size{800u, 700u};
