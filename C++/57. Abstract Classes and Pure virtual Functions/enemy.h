#ifndef ENEMY_H
#define ENEMY_H


class enemy
{
   public:
    enemy();
    virtual void attack(int);
   protected :
    int attackvar;
};

#endif // ENEMY_H
