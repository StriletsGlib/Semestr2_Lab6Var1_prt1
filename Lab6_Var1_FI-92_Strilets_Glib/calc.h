#ifndef CALC_H
#define CALC_H

#endif // CALC_H
#include <string>
#include <iostream>
#include <sstream>
class calc{
private:
    double x, y, res;
    std::string history="";
public:
    calc(double d1, double d2){
      setx(d1);
      sety(d2);
      setres(0);
      setHistory("");
    };
    double getx(){return x;};
    double gety(){return y;};
    double getres(){return res;};
    std::string getHistory(){return history;};
    void setx(double a){x=a;};
    void sety(double a){y=a;};
    void setres(double a){res=a;};
    void setHistory(std::string s){history = s;};
    void addStringToHistory(std::string k);
    void addOperationToHistory(std::string a);
    void clearHistory();
    void sum();
    void dif();
    void umn();
    void divide();
    void clear(){
        setx(0);
        sety(0);
        setres(0);
        setHistory("");
    };
    void writeOperationToHistory(std::string a);
};
bool testForInt(std::string t);
