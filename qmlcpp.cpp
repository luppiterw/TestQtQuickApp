#include "qmlcpp.h"

QmlCpp::QmlCpp(QObject *parent) : QObject(parent)
{

}

void QmlCpp::setValue(int nValue)
{
    this->m_nValue = nValue;
}

int QmlCpp::getValue()
{
    return this->m_nValue;
}
