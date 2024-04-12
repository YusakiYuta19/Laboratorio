#ifndef OAPARIENCIA_H
#define OAPARIENCIA_H

class OApariencia {
public:
    OApariencia();
    virtual void PintarOsx() = 0;
    virtual void DibujarSimboloOSX(char, int, bool) = 0;
protected:
private:
};

#endif // OAPARIENCIA_H
