#ifndef MESSAGE_H
#define MESSAGE_H

#include <stdint.h>
#include <QByteArray>

uint16_t ModbusCRC16(QByteArray senddata);

#endif // MESSAGE_H
