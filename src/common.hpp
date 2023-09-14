#pragma once

#include <atomic>
#include <filesystem>
#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

extern std::atomic_bool g_running;
extern const int g_game_fps;

extern sf::VideoMode g_screen_size;
