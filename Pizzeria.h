#ifndef PIZZERIA_H
#define PIZZERIA_H


class Pizzeria
{
    public:
        Pizzeria();

        int getCapacidad();
        int getOcupacion();
        float getPrecioTotal();
        char *getMedioDePago();

        void setCapacidad(int);
        void setOcupacion(int);
        void setPrecioTotal(float);
        void setMedioDePago(char *);

        virtual ~Pizzeria();

    protected:

    private:
        int _capacidad;
        int _ocupacion;
        float _precioTotal;
        char _medioDePago[30];
};

#endif // PIZZERIA_H
