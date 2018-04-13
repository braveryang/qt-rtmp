#ifndef FQFS_H
#define FQFS_H

#include <QMainWindow>

namespace Ui {
class fqfs;
}

class fqfs : public QMainWindow
{
    Q_OBJECT

public:
    explicit fqfs(QWidget *parent = 0);
    ~fqfs();

private:
    Ui::fqfs *ui;
};

#endif // FQFS_H
