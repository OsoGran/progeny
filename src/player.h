/**********************************************************************************************
*
*   raylib - Advance Game template
*
*   Screens Functions Declarations (Init, Update, Draw, Unload)
*
*   Copyright (c) 2014-2022 Ramon Santamaria (@raysan5)
*
*   This software is provided "as-is", without any express or implied warranty. In no event
*   will the authors be held liable for any damages arising from the use of this software.
*
*   Permission is granted to anyone to use this software for any purpose, including commercial
*   applications, and to alter it and redistribute it freely, subject to the following restrictions:
*
*     1. The origin of this software must not be misrepresented; you must not claim that you
*     wrote the original software. If you use this software in a product, an acknowledgment
*     in the product documentation would be appreciated but is not required.
*
*     2. Altered source versions must be plainly marked as such, and must not be misrepresented
*     as being the original software.
*
*     3. This notice may not be removed or altered from any source distribution.
*
**********************************************************************************************/

#ifndef PLAYER_H
#define PLAYER_H

//----------------------------------------------------------------------------------
// class Definition
//----------------------------------------------------------------------------------
class Player 
{
private:    
    std::string name;
    int health;
    int experience;

public:
    // Constructor
    Player(const std::string& playerName, int startingHealth = 100, )
    
    // Getters
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    int getExperience() const { return experience; }

    // Setters
    void setHealth(int newHealth) { health = newHealth; }
    void setExperience(int newExperience) { experience = newExperience; }

    // Other methods
    void takeDamage(int damage) 
    {
        health -= damage;
        if (health < 0)
        {
            health = 0;
        }
    }

    void gainExperience(int exp) 
    {
        experience += exp;
        // Level up-logic?
    }
};

//----------------------------------------------------------------------------------
// Global Variables Declaration (shared by several modules)
//----------------------------------------------------------------------------------
extern GameScreen currentScreen;
extern Font font;
extern Music music;
extern Sound fxCoin;

#ifdef __cplusplus
extern "C" {            // Prevents name mangling of functions
#endif

//----------------------------------------------------------------------------------
// Gameplay Screen Functions Declaration
//----------------------------------------------------------------------------------
void InitPlayer(void);
void UpdatePlayerLocation(void);
//void DrawGameplayScreen(void);
//int FinishGameplayScreen(void);

#ifdef __cplusplus
}
#endif

#endif // SCREENS_H
