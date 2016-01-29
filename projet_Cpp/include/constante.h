#ifndef CONSTANTE_H
#define CONSTANTE_H


class Constante : public Expression
{
    public:
        Constante();
        Constante(double);
        virtual ~Constante();
        double eval() const;
        Expression* clone() const;
        friend ostream& operator<<(ostream&, const Constante &);

    protected:
    private:
        double _value = 0;
};

#endif // CONSTANTE_H
