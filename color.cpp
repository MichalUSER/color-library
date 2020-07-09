#include "color.h"

string toColor(string text, int color)
{
	string coloredText = "";
	switch(color)
	{
		case 1:
			coloredText = "\033[1;32m" + text + "\033[0m";
			break;
		case 2:
			coloredText = "\033[1;31m" + text + "\033[0m";
			break;
		case 3:
			coloredText = "\033[1;33m" + text + "\033[0m";
			break;
		case 4:
			coloredText = "\033[1;34m" + text + "\033[0m";
			break;
		case 5:
			coloredText = "\033[1;35m" + text + "\033[0m";
			break;
		case 6:
			coloredText = "\033[1;36m" + text + "\033[0m";
			break;
		case 7:
			coloredText = "\033[1;94m" + text + "\033[0m";
			break;
		case 8:
			coloredText = "\033[1;37m" + text + "\033[0m";
			break;
		case 9:
			coloredText = "\033[1;30m" + text + "\033[0m";
			break;
		default:
			coloredText = text;
	}
	return coloredText;
}
