#ifndef QMLCPP_H
#define QMLCPP_H

#include <QObject>

class QmlCpp : public QObject
{
    Q_OBJECT
public:
    explicit QmlCpp(QObject *parent = nullptr);

    Q_INVOKABLE void setValue(int nValue);
    Q_INVOKABLE int getValue();
signals:

public slots:


private:
    int m_nValue;
};

#endif // QMLCPP_H
