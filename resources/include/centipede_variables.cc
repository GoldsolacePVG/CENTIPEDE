struct TPlayer{
    esat::Vec2 position;
    esat::SpriteHandle sprite;
    int lives, speed, score;
    bool is_alive;
};

TPlayer *player;

esat::SpriteHandle g_player_sprite;