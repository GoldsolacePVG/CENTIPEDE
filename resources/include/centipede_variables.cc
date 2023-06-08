struct TMove{
    bool right, left, up, down;
};

struct TPlayer{
    esat::Vec2 position;
    esat::SpriteHandle sprite;
    int lives, speed, score;
    bool is_alive;
    TMove can_move;
};

TPlayer *player;

const int kWindowWidth = 850, kWindowHeight = 1000;

esat::SpriteHandle g_player_sprite;

int g_player_turn = 0;