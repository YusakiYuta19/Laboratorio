#ifndef OSOSX_H
#define OSOSX_H

#include <string>
#include "OApariencia.h"

using namespace std;

class OSOSx : public OApariencia {
public:
    OSOSx();
    virtual ~OSOSx();
    void PintarOsx() override;
    void DibujarSimboloOSX(char, int, bool) override;
protected:
private:
    string _osx_titulo;
    string _osx_area_trabajo;
    string _osx_estado;
    void CentrarTextOSX(string);
};

#endif // OSOSX_H


