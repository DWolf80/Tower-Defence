#ifndef START_H
#define START_H
#include <QWidget> //开始界面

namespace Ui{
class Start;
}

class Start:public QWidget
{
//Q_OBJECT
public:
    explicit Start(QWidget *parent=0);
    ~Start();
private:
    Ui::Start *ui;
};

#endif // START_H
