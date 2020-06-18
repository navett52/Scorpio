#pragma once

class Command
{
public:
	Command() {
		// Register the command upon creation
		// Maybe think about a larger system that allows commands to be called from the console? Anywhere in code?
	}
	virtual ~Command() {
		// Would then want to unregister command on destruction?
	}
	virtual void execute() = 0;
};