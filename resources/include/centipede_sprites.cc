void InitSprites(){
    g_player_sprite = esat::SpriteFromFile("resources/img/player_sprite.jpg");
}

void ReleaseSprites(){
    esat::SpriteRelease(g_player_sprite);
}