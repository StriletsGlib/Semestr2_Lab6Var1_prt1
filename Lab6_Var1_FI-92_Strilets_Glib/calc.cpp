#include <QApplication>
#include "header.h"
#include "mainwindow.h"
void calc::writeOperationToHistory(std::string a){
    std::stringstream m;
    m<<x<<a<<y<<"="<<res<<std::endl;
    m>>a;
    setHistory(a);
};
void calc::sum(){
    setres(x+y);
    writeOperationToHistory("+");
};
void calc::dif(){
    setres(x-y);
    writeOperationToHistory("-");
};
void calc::umn(){
    setres(x*y);
    writeOperationToHistory("*");
};
void calc::divide(){
    if (y!=0){
        res=x/y;
        writeOperationToHistory("/");
    }
    else{
        setHistory("Can't divide by 0!");
    }
};

void calc::addStringToHistory(std::string k){
    k+="/n";
    setHistory(getHistory()+k);
};
void calc::addOperationToHistory(std::string a){
    std::stringstream m;
    m<<x<<a<<y<<" = "<<res<<std::endl;
    m>>a;
    setHistory(getHistory()+a);
};
void calc::clearHistory(){setHistory("");};
bool testForInt(std::string t){
    bool r = true;
    for (int i = 0; i<t.length(); i++){
        if ((t[i]>'9') or (t[i] <'0')) r = false;
    }
    return r;
}
