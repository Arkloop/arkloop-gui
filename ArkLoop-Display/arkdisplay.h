#ifndef ARKDISPLAY_H
#define ARKDISPLAY_H

#include <QMainWindow>

namespace Ui {
class ArkDisplay;
}

class ArkDisplay : public QMainWindow
{
    Q_OBJECT

public:
    explicit ArkDisplay(QWidget *parent = nullptr);
    ~ArkDisplay();

private:
    Ui::ArkDisplay *ui;
};

#endif // ARKDISPLAY_H
