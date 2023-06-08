void InitPlayer(){
    player = (TPlayer*)calloc(2, sizeof(TPlayer));

    for(int i = 0; i < 2; i++){
        (player + i)->position.x = kWindowWidth / 2 - 24;
        (player + i)->position.y = kWindowHeight - 100;
        (player + i)->lives = 3;
        (player + i)->score = 0;
        (player + i)->speed = 24;
        (player + i)->is_alive = true;
        (player + i)->can_move.right = true;
        (player + i)->can_move.left = true;
        (player + i)->can_move.down = true;
        (player + i)->can_move.up = true;
        (player + i)->sprite = g_player_sprite;
    }
}

void UpdatePlayer(){
    if((player + g_player_turn)->is_alive){
        //MOVEMENT
        if(esat::MousePositionX() > (player + g_player_turn)->position.x && (player + g_player_turn)->position.x < kWindowWidth - 50 && (player + g_player_turn)->can_move.right){
            (player + g_player_turn)->position.x += (player + g_player_turn)->speed;
        }
        if(esat::MousePositionX() < (player + g_player_turn)->position.x && (player + g_player_turn)->position.x > 0 && (player + g_player_turn)->can_move.left){
            (player + g_player_turn)->position.x -= (player + g_player_turn)->speed;
        }
        if(esat::MousePositionY() > (player + g_player_turn)->position.y && (player + g_player_turn)->position.y < kWindowHeight + 50 && (player + g_player_turn)->can_move.down){
            (player + g_player_turn)->position.y += (player + g_player_turn)->speed;
        }
        if(esat::MousePositionY() < (player + g_player_turn)->position.y && (player + g_player_turn)->position.y > kWindowHeight / 2 && (player + g_player_turn)->can_move.down){
            (player + g_player_turn)->position.y -= (player + g_player_turn)->speed;
        }
    }
}

void DrawPlayer(){
    if((player + g_player_turn)->is_alive){
        esat::DrawSprite((player + g_player_turn)->sprite, (player + g_player_turn)->position.x, (player + g_player_turn)->position.y);
    }
}