#include "Game.h"
int main() {
    Game game;
    game.initGame();
    while (game.getPlaying()) {
       game.mainMenu();
    }
    return 0;
}
