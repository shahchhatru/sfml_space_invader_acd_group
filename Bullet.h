#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp>


class Bullet : public sf::Sprite
{
    public:
        /** Default constructor */
        Bullet(sf::Texture& texture,int px,int py);
        /** Default destructor */
        virtual ~Bullet();

        /** Access posx
         * \return The current value of posx
         */
        int Getposx() { return posx; }
        /** Set posx
         * \param val New value to set
         */
        void Setposx(int val) { posx = val; }
        /** Access posy
         * \return The current value of posy
         */
        int Getposy() { return posy; }
        /** Set posy
         * \param val New value to set
         */
        void Setposy(int val) { posy = val; }
        /** Access xsize
         * \return The current value of xsize
         */
        int Getxsize();
        /** Set xsize
         * \param val New value to set
         */

        int Getysize() ;
        void moveup();
        bool getdestroy();
        void setdestroy( bool val){ destroy=val;}

    protected:

    private:
        int posx; //!< Member variable "posx"
        int posy; //!< Member variable "posy"
        int xsize; //!< Member variable "xsize"
        int ysize; //!< Member variable "ysize"
        bool destroy;
};

#endif // BULLET_H
