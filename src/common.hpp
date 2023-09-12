#pragma once

#include "global/all.hpp"
#include <atomic>
#include <filesystem>
#include <iostream>
#include <memory>
#include <raylib-cpp-utils.hpp>
#include <raylib-cpp.hpp>
#include <raymath.hpp>
#include <string>

extern std::atomic_bool g_running;
extern const int g_game_fps;

extern const int g_screen_width;
extern const int g_screen_height;

extern std::vector<miner::Sprite> g_sprites;
