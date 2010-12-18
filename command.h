#include "devtag.h"
#define TH_COMMAND_PARAM_LENGTH 256

enum command_type {
	CMD_NOP,
	CMD_ADD,
	CMD_REMOVE,
	CMD_QUIT,
	CMD_DISABLE,
	CMD_ENABLE,
	CMD_PASSFD,
	CMD_CLEARDEVS,
	CMD_CHANGEMODE
};

struct command {
	enum command_type type;
	/* udev pathnames are long, but not that long */
	char param[TH_COMMAND_PARAM_LENGTH];
	int fd;
	int exclusive;
	char tag[TH_DEVICE_TAG_LENGTH];
};
