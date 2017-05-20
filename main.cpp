#include <stdio.h>
#include <QDebug>
#include "RTMPStream.h"

int main(int argc ,char** argv)
{
    CRTMPStream crstm;
    qDebug()<<"init";
    qDebug()<<crstm.Connect("rtmp://localhost/live/test");
    crstm.SendH264File("/home/yatai/cuc_ieschool.h264");
    crstm.Close();
}
