#include "MainWindow.h"
#include "Arguments.h"

#include <QtGui/QApplication>

void parseArgs(Arguments& args, int argc, char* argv[])
{
	for (int i = 1; i < argc; i++) {
		if (strcmp(argv[i], "--email") == 0) {
			args.email = argv[++i];
		}
		if (strcmp(argv[i], "--password") == 0) {
			args.password = argv[++i];
		}
	}
}

int main(int argc, char *argv[])
{
	Arguments args;
	parseArgs(args, argc, argv);

    QApplication a(argc, argv);
	MainWindow w(args);
    w.show();
    return a.exec();
}