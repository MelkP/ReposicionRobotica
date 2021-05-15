#ifndef SensorDistancia_h
#define SensorDistancia_h

#include "Arduino.h"

class SensorDistancia{
  private:
    int pinesConexion1;
    int pinesConexion2;
    double valorSensado;
    boolean ondaLanzada;   
  public:
    SensorDistancia(int pinesConexion1, int pinesConexion2, double valorSensado, boolean ondaLanzada);
    double getValorSensado();
    void setOndaLanzada(boolean lanzada);
    boolean getOndaLanzada();
    void setPinesConexion(int eleccion, int pinModificar);
};
#endif
