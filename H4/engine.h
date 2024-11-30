#ifndef ENGINE_H
#define ENGINE_H





class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine();
    Engine(int, double);
    int getHorsepower();
    void setHorsepower(const int &newHorsepower);
    double getDisplacement();
    void setDisplacement(const double &newDisplacement);
    ~Engine();
};

#endif // ENGINE_H
