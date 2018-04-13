#include "fqfs.h"
#include "ui_fqfs.h"

fqfs::fqfs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fqfs)
{
    ui->setupUi(this);


    ui->s1->setReadFrameTimeout(1000);
    ui->s1->openStream("rtmp://live5.cqnews.net:1935/live/TVFLV15");
    ui->s2->openStream("http://ivi.bupt.edu.cn/hls/cctv3hd.m3u8");


}

fqfs::~fqfs()
{
    delete ui;
}
