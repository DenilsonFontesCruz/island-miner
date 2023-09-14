#include "common.hpp"

int main() {
    // Init
    auto window = sf::RenderWindow(g_screen_size, "Island Miner");
    window.setFramerateLimit(120);

    sf::Texture texture;
    if (!texture.loadFromFile("../resources/scenes/taiga_/map.png"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);

    while (window.isOpen()) {
        for (auto event = sf::Event{}; window.pollEvent(event);) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();

        sprite.setScale(.8f, .2f);
        
        window.draw(sprite);
        window.display();
    }

    return 0;
}
