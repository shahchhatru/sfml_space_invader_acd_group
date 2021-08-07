#ifndef SPIDER_H
#define SPIDER_H
#include"Bullet.h"
#include"Player.h"
#include <SFML/Graphics.hpp>


class Spider : public sf::Sprite
{
    public:
        static int xarray[10];
        static int yarray[10];
        static int noobj;
        static int score;
        Spider(sf::Texture& texture,int px,int py);
        virtual ~Spider();

        int Getposx() { return posx; }
        void Setposx(int val) { posx = val; }
        int Getposy() { return posy; }
        void Setposy(int val) { posy = val; }
        int getxsize();

        int getysize() ;
        void move_down();
        bool detect_collisions(Player &player);
        bool detect_collisions(Bullet &player);
        static void rand_number();
        int getid();
        void resetobj();

    protected:

    private:

        int id;
        int posx;
        int posy;
        int xsize;
        int ysize;
};

#endif // SPIDER_H
