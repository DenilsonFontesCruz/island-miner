#include "colors.hpp"
#include "common.hpp"

int main() {
    using namespace miner;
    // Init
    raylib::Window window(g_screen_width, g_screen_height, "Island Miner");
    raylib::AudioDevice audio_device;

    SetExitKey(0);
    SetTargetFPS(g_game_fps);

    raylib::Music music("../resources/sounds/hello.mp3");

    raylib::Texture2D grass_texture("../resources/scenes/fantasy_/taigaForest_.png");
    raylib::Texture2D player_sprite("../resources/sprites/skeleton2_v2_1.png");

    raylib::Rectangle player_src(0, 0, 16, 16);
    raylib::Rectangle player_dest(0, 0, 64, 64);

    raylib::Camera2D camera({(float)g_screen_width / 2, (float)g_screen_height / 2},
        {(float)player_dest.x + (player_dest.GetWidth() / 2),
            (float)player_dest.y + (player_dest.GetHeight() / 2)},
        0.f,
        1.f);

    float player_speed = 3;

    while (!window.ShouldClose()) {
        // Input
        if (IsKeyDown(KEY_W))
            player_dest.y -= player_speed;
        if (IsKeyDown(KEY_S))
            player_dest.y += player_speed;
        if (IsKeyDown(KEY_A))
            player_dest.x -= player_speed;
        if (IsKeyDown(KEY_D))
            player_dest.x += player_speed;

        // Update
        music.Play();
        music.Update();
        music.Resume();

        camera.SetTarget({player_dest.x + (player_dest.GetWidth() / 2),
            player_dest.y + (player_dest.GetHeight() / 2)});

        // Draw
        BeginDrawing();
        camera.BeginMode();
        {
            window.ClearBackground(color_bg);

            // Draw
            grass_texture.Draw(50, 50);
            player_sprite.Draw(player_src, player_dest);
        }
        camera.EndMode();
        { window.DrawFPS(10, 10); }
        EndDrawing();
    }

    // Quit
    // Unload textures
    grass_texture.Unload();
    player_sprite.Unload();

    // Unload music
    music.Unload();

    audio_device.Close();
    window.Close();
    return 0;
}
