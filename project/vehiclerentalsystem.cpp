#include <QtWidgets>
#include <QApplication>

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = 0);
    
private slots:
    void buttonClicked();

private:
    QLineEdit *display;
    QGridLayout *buttonLayout;
    QPushButton *createButton(const QString &text);
};

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
{
    display = new QLineEdit();
    display->setAlignment(Qt::AlignRight);
    display->setReadOnly(true);

    buttonLayout = new QGridLayout();

    buttonLayout->addWidget(createButton("7"), 1, 0);
    buttonLayout->addWidget(createButton("8"), 1, 1);
    buttonLayout->addWidget(createButton("9"), 1, 2);
    buttonLayout->addWidget(createButton("/"), 1, 3);
    buttonLayout->addWidget(createButton("4"), 2, 0);
    buttonLayout->addWidget(createButton("5"), 2, 1);
    buttonLayout->addWidget(createButton("6"), 2, 2);
    buttonLayout->addWidget(createButton("*"), 2, 3);
    buttonLayout->addWidget(createButton("1"), 3, 0);
    buttonLayout->addWidget(createButton("2"), 3, 1);
    buttonLayout->addWidget(createButton("3"), 3, 2);
    buttonLayout->addWidget(createButton("-"), 3, 3);
    buttonLayout->addWidget(createButton("0"), 4, 0);
    buttonLayout->addWidget(createButton("."), 4, 1);
    buttonLayout->addWidget(createButton("="), 4, 2);
    buttonLayout->addWidget(createButton("+"), 4, 3);

    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addWidget(display);
    mainLayout->addLayout(buttonLayout);
    
    setLayout(mainLayout);
}

QPushButton *Calculator::createButton(const QString &text)
{
    QPushButton *button = new QPushButton(text);
    button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect(button, SIGNAL(released()), this, SLOT(buttonClicked()));
    return button;
}

void Calculator::buttonClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    
    if (!clickedButton)
        return;
    
    QString buttonText = clickedButton->text();
    if (buttonText == "=")
    {
        QString expression = display->text();
        QScriptEngine engine;
        QScriptValue result = engine.evaluate(expression);
        display->setText(result.toString());
    }
    else
    {
        display->setText(display->text() + buttonText);
    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Calculator calculator;
    calculator.setWindowTitle("Simple Calculator");
    calculator.resize(300, 400);
    calculator.show();
    return app.exec();
}
