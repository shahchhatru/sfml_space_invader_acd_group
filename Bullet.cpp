#include "Bullet.h"
#include<SFML/Graphics.hpp>
#define win_width 800
#define win_height 800
Bullet::Bullet(sf::Texture& texture,int px,int py)
{
    //ctor
        setTexture(texture);
        setColor(sf::Color(255,255,255,240));
        setScale(0.02,0.02);
       // posx=px;
        Setposx(px);
       // posy=py;
        Setposy(py);
        destroy=false;
        setPosition(px,py);
        xsize=Getxsize();
        ysize=Getysize();

}

Bullet::~Bullet()
{
    //dtor
}

Bullet::Getxsize(){
        int a;
        a=getTexture()->getSize().x *getScale().x;
        //std::cout<<"x size i.e length"<<a<<std::endl;
        return a;
}

Bullet::Getysize(){
        int a;
        a=getTexture()->getSize().y *getScale().y;
        //std::cout<<"x size i.e length"<<a<<std::endl;
        return a;
}

void Bullet::moveup(){
    if(posy>-10){
        posy--;
    }else{
        destroy=true;
    }
    setPosition(posx,posy);
}

bool Bullet::getdestroy(){
    return destroy;
}
