#pragma once
#include <cstdint>
#include <array>

class Bus
{
public: 
	Bus();
	~Bus();

public: // devices on the bus
	olc6502 cpu;

	// ram for cpu
	std::array<uint8_t, 64 * 1024> ram;

public: // read and write on the bus
	void write(uint16_t addr, uint8_t data);
	uint8_t read(uint16_t addr, bool bReadOnly = false);
};

