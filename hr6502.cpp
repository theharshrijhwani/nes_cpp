#include "hr6502.h"
#include "Bus.h"

hr6502::hr6502() {

}

hr6502::~hr6502() {

}

uint8_t hr6502::read(uint16_t a) {
	return bus->read(a, false);
}

void hr6502::write(uint16_t a, uint8_t d) {
	bus->write(a, d);
}
