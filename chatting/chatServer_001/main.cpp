#include <QCoreApplication>
#include "chatserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    chatServer* server=new chatServer();
    bool success=server->listen(QHostAddress::Any,3490);
    if(!success)
    {
        printf("Could not listen on port 3490.\n");
        return 0;
    }

    printf("Ready\n");



    return a.exec();
}
