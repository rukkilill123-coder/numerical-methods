#include <SFML/Window.hpp>

// g++ verlet_integration.cpp -o verlet_integration -I sfml/SFML/include -L sfml/SFML/build/lib -DSFML_STATIC -lsfml-graphics-s -lfreetype -lharfbuzz -lsfml-window-s -lsfml-system-s -lopengl32 -lwinmm -lgdi32

int main()
{
  sf::Window window(sf::VideoMode({800, 600}), "My window");
  
  return 0;
}
