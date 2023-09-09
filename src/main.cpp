#include "common.hpp"

int main() {
    auto window = std::make_unique<raylib::Window>(g_screen_width, g_screen_height, "Island Miner");

    SetTargetFPS(g_game_fps);

    raylib::Vector2 circle = {0, 0};

    while (!window->ShouldClose()) {
        // Input
        circle = raylib::Mouse::GetPosition();

        // Update

        // Draw
        BeginDrawing();
        {
            window->ClearBackground(raylib::Color::White());

            circle.DrawCircle(10, raylib::Color::Orange());

            window->DrawFPS(10, 10);
        }
        EndDrawing();
    }

    window->Close();
    return 0;
}
