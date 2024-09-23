#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.resize(400, 300); // Set the window size
    window.setWindowTitle("Hello Qt!"); // Set the window title
    window.show(); // Show the window

    return app.exec(); // Start the application event loop
}
