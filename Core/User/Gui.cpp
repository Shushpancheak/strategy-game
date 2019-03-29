#include "Gui.hpp"
#include <utility>

Gui::Gui(std::weak_ptr<Player> player, std::shared_ptr<Map> map,
         std::shared_ptr<sf::RenderWindow> window) 
  : player_(std::move(player))
  , map_(std::move(map))
  , window_(std::move(window)) {}

Gui::~Gui() = default;

void Gui::HandleMouseClick(sf::Vector2i mouse_position) {
  
}

void Gui::Draw() {
  
}
