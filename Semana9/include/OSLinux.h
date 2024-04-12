#ifndef OSLINUX_H
#define OSLINUX_H

#include <string>
#include "XApariencia.h"

using namespace std;

class OSLinux : public XApariencia {
public:
    OSLinux();
    virtual ~OSLinux();
    void PintarLinux() override;
    void DibujarSimboloX(char, int, bool) override;

protected:

private:
    string _lin_titulo;
    string _lin_area_trabajo;
    string _lin_estado;
    void DibujarSimboloLX(char, int, bool _saltarlineaLX = false);
    void CentrarTextoLX(string);
};

#endif // OSLINUX_H
