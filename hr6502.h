#pragma once

#include <cstdint>

class Bus;

class hr6502
{
public: 
	hr6502();
	~hr6502();

	void connectBus(Bus* n) {
		bus = n;
	}

	enum FLAGS6502 {
		C = (1 << 0),
		Z = (1 << 1),
		I = (1 << 2),
		D = (1 << 3),
		B = (1 << 4),
		U = (1 << 5),
		V = (1 << 6),
		N = (1 << 7)
	};

private:
	Bus* bus = nullptr;
	uint8_t read(uint16_t a);
	void write(uint16_t a, uint8_t d);
};

