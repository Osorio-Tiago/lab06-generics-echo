//
// Created by Angelo on 17/9/2020.
//

#include "gtest/gtest.h"
#include "PhysicalGame.h"
#include "StreamingGames.h"
#include "DigitalGame.h"
#include "ListaGenerica.h"

TEST(GameTest, AddGamesList)
{
    Lista<Game> JuegosList;
    Game* gow = new DigitalGame("God of War Ragnarok", 59.99, 15, "www.juegosgratis.com");

    JuegosList.insertaObjeto(gow);

EXPECT_TRUE(JuegosList.getPrimero() != NULL);


   // EXPECT_EQ();
}