# qt-rtmp
Play rtmp url in Qt

这段时间在开发QT中播放直播流的播放器
对于RTMP格式的链接始终无法播放，
偶然在网上通过搜索“qt rtmp”，搜索到了一个[GITHUB仓库](https://github.com/zuozhulin88/FQFLib)，
其给出了对RTMP和RSTP格式的支持，但是只给出了一个在VS中的例子，没有给出在ＱtCreater下的例子
于是自己仿照其VS方式的工程写了一个QtCreater中的，
可以对HTTP开头的直播流进行播放，但是无法播放RTMP格式的链接，如香港卫视：[rtmp://live.hkstv.hk.lxdns.com/live/hks](rtmp://live.hkstv.hk.lxdns.com/live/hks)

后来又发现了一个项目叫做Qt-AV:[https://github.com/wang-bin/QtAV](https://github.com/wang-bin/QtAV)
通过一定的配置，在QT-AV一个例子的基础上终于实现了一个能够播放RTMP链接的播放器，见我的另一个仓库
[https://github.com/zhixuanli/qt-av-stream-player](https://github.com/zhixuanli/qt-av-stream-player)

详细情况见本文：[QT | 聊聊QT与直播流播放——从QMediaPlayer到Qt-AV](http://www.cnblogs.com/QingHuan/p/8830562.html)
