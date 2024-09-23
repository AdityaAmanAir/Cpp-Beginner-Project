#include <QApplication>
#include <QWidget.h>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.resize(400, 300);
    window.setWindowTitle("Hello Qt!");
    window.show();

    return app.exec();
}
