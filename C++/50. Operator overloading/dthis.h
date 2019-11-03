#ifndef DTHIS_H
#define DTHIS_H


class dhruv
{
public :
    int num;
    dhruv(int);
    dhruv();

    dhruv operator*(dhruv);
    dhruv operator+(dhruv);
    dhruv operator-(dhruv);
    dhruv operator/(dhruv);


};

#endif // DTHIS_H
