#include "Scanner.h"

Scanner::Scanner(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	reader = new Reader(this);

	QObject::connect(reader, &Reader::onDataRead, this, &Scanner::surMedicamentLu);
}

void Scanner::surMedicamentLu(QString code)
{
	ui.codeBarreEdit->setText(code);
}
