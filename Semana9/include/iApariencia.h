#ifndef IAPARIENCIA_H
#define IAPARIENCIA_H


class iApariencia
{
    public:
        iApariencia();
        virtual void PintarWindow() = 0;
        virtual void DibujarSimbolo(char,int,bool) = 0;

    protected:

    private:
};

#endif // IAPARIENCIA_H
