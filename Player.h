#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>


class Player : public sf::Sprite
{
    public:
        Player(sf::Texture& texture,int px,int py);
        virtual ~Player();

        unsigned int Getm_Counter() { return m_Counter; }
        void Setm_Counter(unsigned int val) { m_Counter = val; }
        int Getposy() { return posy; }
        int Getposx(){return posx;}
        void Setposx(int val){posx=val;}
        void Setposy(int val) { posy = val; }
        int getxsize();

        int getysize();
        void move_left();
        void move_right();
        void movex(int px);

    protected:

    private:
        unsigned int m_Counter;
        int posx;
        int posy;
        int xsize;
        int ysize;
};

#endif // PLAYER_H
