#include "Player.h"
#include<iostream>
#include<SFML/Graphics.hpp>

#define window_width 800
Player::Player(sf::Texture& texture,int px,int py)
{
    //ctor
        setTexture(texture);
        setColor(sf::Color(255,255,255,240));
        setScale(0.1,0.1);
        posx=px;
        posy=py;
        setPosition(px,py);
        xsize=getxsize();
        ysize=getysize();
}

Player::getxsize(){
     int a;
        a=getTexture()->getSize().x *getScale().x;
        //std::cout<<"x size i.e length"<<a<<std::endl;
        return a;
}
Player::getysize(){
     int  a;
        a=getTexture()->getSize().y *getScale().y;
        //std::cout<<"y size i.e width"<<a<<std::endl;
        return a;
}
Player::~Player()
{
    //dtor
}

void Player::move_left(){
    if(posx>0){
        posx--;
        setPosition(posx,posy);
    }
}
void Player::move_right(){
    if(posx<750){
        posx++;
        setPosition(posx,posy);
    }
}

void Player::movex(int px){
    if(px<window_width-90){
         posx=px;
    }

    setPosition(posx,posy);
}
