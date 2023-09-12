#include "common.hpp"

#include "entity/player.hpp"


int main() {
    using namespace miner;
    // Init
    raylib::Window window(g_screen_width, g_screen_height, "Island Miner");
    //raylib::AudioDevice audio_device;

    loadTextures("../resources/scenes");

    // Load the map with raylib-tileson

    SetExitKey(0);
    SetTargetFPS(g_game_fps);

    raylib::Music music("../resources/sounds/hello.mp3");
    music.Play();

    raylib::Texture2D grass_texture("../resources/scenes/taiga_/taiga_.png");

    auto player = std::make_unique<Player>("../resources/sprites/skeleton2_v2_1.png");

    raylib::Rectangle island_src(128, 16, 16, 16);
    raylib::Rectangle island_dest(16, 10, 64, 64);

    raylib::Camera2D camera({(float)g_screen_width / 2, (float)g_screen_height / 2},
        {(float)player->m_dest.x + (player->m_dest.GetWidth() / 2),
            (float)player->m_dest.y + (player->m_dest.GetHeight() / 2)},
        0.f,
        1.f);

    while (!window.ShouldClose()) {
        // Input
        player->input();

        // Update
        music.Update();

        camera.SetTarget({player->m_dest.x + (player->m_dest.GetWidth() / 2),
            player->m_dest.y + (player->m_dest.GetHeight() / 2)});

        // Draw
        BeginDrawing();
        camera.BeginMode();
        {
            window.ClearBackground(colors::color_bg);

            // Draw
            // player_sprite.Draw(player_src, player_dest);
            // grass_texture.Draw(island_src, island_dest);

            player->draw();
        }
        camera.EndMode();
        { window.DrawFPS(10, 10); }
        EndDrawing();
    }

    // Quit
    // Unload textures
    grass_texture.Unload();
    player.reset();
    // player_sprite.Unload();

    // Unload music
    music.Stop();
    music.Unload();

    //audio_device.Close();
    window.Close();
    return 0;
}
